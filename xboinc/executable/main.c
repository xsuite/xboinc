// copyright ############################### #
// This file is part of the Xboinc Package.  #
// Copyright (c) CERN, 2024.                 #
// ######################################### #


// ===============================================================================================
// IMPORTANT
// ===============================================================================================
// Only make changes to this file just before a minor version bump (need a separate commit though)
// to avoid having multiple xboinc versions with out-of-sync executables.
// ===============================================================================================

#ifdef __cplusplus
#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cstdarg>
#else
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#endif

#ifndef NULL
#define NULL 0
#endif

#ifndef UNUSED
#define UNUSED(expr) (void)(expr)
#endif

// Xsuite code (in C) that the BOINC app calls
// This should be compiled separately in advance
#ifdef __cplusplus
extern "C" {
#endif
#include "xtrack.h"
#ifdef __cplusplus
};
#endif

// BOINC API
#ifdef COMPILE_TO_BOINC
#ifndef __cplusplus
#error "Compilation with BOINC API should be done in C++"
#endif
#ifdef _WIN32
#include "boinc_win.h"
#else
#include "config.h"
#endif
#include "str_util.h"
#include "util.h"
#include "filesys.h"
#include "boinc_api.h"
#include "mfile.h"
#endif

#define XB_INPUT_FILENAME "xboinc_input.bin"
#define XB_OUTPUT_FILENAME "xboinc_state_out.bin"
#define XB_CHECKPOINT_FILE "checkpoint.bin"


// ===============================================================================================
// Do not change
// ===============================================================================================
// version XXX.YYY as int  (no patch)
const int64_t xboinc_exec_version = 1;
// ===============================================================================================

int8_t run_slow = 0;
int8_t early_exit = 0;
int8_t early_crash = 0;
int8_t early_sleep = 0;
int8_t trickle_up = 0;
int8_t trickle_down = 0;
int8_t critical_section = 0;    // run most of the time in a critical section
int8_t report_fraction_done = 0;
int8_t network_usage = 0;
double cpu_time = 20, comp_result;
int8_t verbose = 0;

FILE* outfile;

static int64_t XB_track(int8_t*, XbState, XbInput, int64_t, int64_t, int64_t, int64_t, int64_t);
static void    XB_fprintf(int8_t verbose_level, FILE *stream, char *format, ...);
static FILE*   XB_fopen(char *filename, const char *mode);
static FILE*   XB_fopen_allow_null(char *filename, const char *mode);
static int8_t* XB_file_to_buffer(FILE *fid, int8_t *buf_in);
static int     XB_do_checkpoint(XbInput xb_input, XbState xb_state);


int main(int argc, char **argv){
    int retval;
    UNUSED(retval);

    // Parse BOINC arguments and initialise
    for (int ii=0; ii<argc; ii++) {
#ifdef COMPILE_TO_BOINC
        if (strstr(argv[ii], "early_exit")) early_exit = 1;
        if (strstr(argv[ii], "early_crash")) early_crash = 1;
        if (strstr(argv[ii], "early_sleep")) early_sleep = 1;
        if (strstr(argv[ii], "run_slow")) run_slow = 1;
        if (strstr(argv[ii], "critical_section")) critical_section = 1;
        if (strstr(argv[ii], "network_usage")) network_usage = 1;
        if (strstr(argv[ii], "cpu_time")) {
            cpu_time = atof(argv[++ii]);
        }
        if (strstr(argv[ii], "trickle_up")) trickle_up = 1;
        if (strstr(argv[ii], "trickle_down")) trickle_down = 1;
#endif
        if (strstr(argv[ii], "verbose")) {
            verbose = (int8_t) atoi(argv[++ii]);
        }
    }
#ifdef COMPILE_TO_BOINC
    retval = boinc_init();
    if (retval) {
        XB_fprintf(0, stderr, "Boinc_init returned %d\n", retval);
        exit(retval);
    }
    XB_fprintf(1, stdout, "App started; CPU time %f, flags:%s%s%s%s%s%s%s\n",
        cpu_time,
        early_exit?" early_exit":"",
        early_crash?" early_crash":"",
        early_sleep?" early_sleep":"",
        run_slow?" run_slow":"",
        critical_section?" critical_section":"",
        trickle_up?" trickle_up":"",
        trickle_down?" trickle_down":""
    );
    // TODO: What does this do?
    //       Should it go after loading the input file?
    //       Should it really hardcode the number of bytes like this...?
    if (network_usage) {
        boinc_network_usage(5., 17.);
    }
#endif

    // Open input file
    FILE* infile = XB_fopen(XB_INPUT_FILENAME, "rb");
    int8_t* sim_buffer = XB_file_to_buffer(infile, NULL);
    if (!sim_buffer){
        return -1;
    }

    // Get input and metadata
    XbInput xb_input = (XbInput) sim_buffer;
    const int64_t input_version    = XbInput_get__version_xboinc_version(xb_input);
    const int64_t input_version_ss = XbInput_get_xb_state__version_xboinc_version(xb_input);
    if (input_version != xboinc_exec_version || input_version_ss != xboinc_exec_version){
        XB_fprintf(0, stderr, "Xboinc version of executable and input file do not match!\n");
        return -1;
    }

    // Check for checkpoint file and load if it exists, otherwise use XbState from input
    XbState xb_state = XbInput_getp_xb_state(xb_input);
    XB_fprintf(2, stdout, "xb_state: %p\n", (int8_t*) xb_state);
    int64_t current_turn;
    FILE* checkpoint_state = XB_fopen_allow_null(XB_CHECKPOINT_FILE, "rb");
    if (checkpoint_state){
        XB_file_to_buffer(checkpoint_state, (int8_t*) xb_state);
        current_turn = XbState_get__i_turn(xb_state);
        XB_fprintf(1, stdout, "Loaded checkpoint, continuing from turn %d.\n", (int) current_turn);
    } else {
        current_turn = XbState_get__i_turn(xb_state);
        XB_fprintf(1, stdout, "No checkpoint found, starting from turn %d.\n", (int) current_turn);
    }

    // Get data
    const int64_t checkpoint_every = XbInput_get_checkpoint_every(xb_input);
    if (checkpoint_every > 0){
        XB_fprintf(1, stdout, "Checkpointing every %d turns.\n", (int) checkpoint_every);
    } else {
        XB_fprintf(1, stdout, "Not checkpointing.\n");
    }
    int64_t num_turns = XbInput_get_num_turns(xb_input);
    const int64_t num_elements = XbInput_get__num_elements(xb_input);
    XB_fprintf(1, stdout, "num_turns: %d\n", (int) num_turns);
    XB_fprintf(1, stdout, "num_elements: %d\n", (int) num_elements);
    int64_t num_part = 0;
    for (int ii=0; ii<XbState_get__particles__capacity(xb_state); ii++){
        if(XbState_get__particles_state(xb_state, (int64_t) ii) > 0){
            num_part++;
        }
    }
    XB_fprintf(1, stdout, "num_part_alive: %d\n", (int) num_part);

    // Open output file as test
    outfile = XB_fopen(XB_OUTPUT_FILENAME, "wb");
    if (!outfile){
        XB_fprintf(0, stderr, "Could not open output file.\n");
        return 1;
    }

    // Deduce from where to where to track (same logic as in xtrack.Tracker)
    int64_t num_middle_turns = 0;
    int64_t num_elements_last_turn = 0;
    int64_t num_elements_first_turn;
    const int64_t ele_start = XbInput_get_ele_start(xb_input);
    const int64_t ele_stop  = XbInput_get_ele_stop(xb_input);
    if (ele_stop < 1){
        // Track the first turn until the end of the lattice
        // (last turn is also a full cycle, so will be treated as a middle turn)
        num_elements_first_turn = num_elements - ele_start;
        num_middle_turns = num_turns - 1;
    } else {
        if (ele_stop <= ele_start && num_turns == 1){
            // Correct for overflow
            num_turns = 2;
        }
        if (num_turns == 1) {
            // Track only the first partial turn
            num_elements_first_turn = ele_stop - ele_start;
        } else {
            // Track the first turn until the end of the lattice
            num_elements_first_turn = num_elements - ele_start;
            // Track the middle turns
            num_middle_turns = num_turns - 2;
            // Track the last turn until ele_stop
            num_elements_last_turn = ele_stop;
        }
    }

    // Main loop  ================
    // ===========================

    // First turn
    if (current_turn < 1) {
        current_turn = XB_track(sim_buffer, xb_state, xb_input, ele_start, num_elements_first_turn, current_turn, num_turns, checkpoint_every);
    }

    // Middle turns
    while (current_turn <= num_middle_turns){
        current_turn = XB_track(sim_buffer, xb_state, xb_input, 0, num_elements, current_turn, num_turns, checkpoint_every);
    }

    // Last turn, only if incomplete
    if (num_elements_last_turn > 0){
        XB_track(sim_buffer, xb_state, xb_input, 0, num_elements_last_turn, current_turn, num_turns, checkpoint_every);
    }

    // End main loop  ===========
    // ==========================

    XB_fprintf(1, stdout, "Finished tracking\n");
    num_part = 0;
    for (int ii=0; ii<XbState_get__particles__capacity(xb_state); ii++){
        if(XbState_get__particles_state(xb_state, (int64_t) ii) > 0){
            num_part++;
        }
    }
    XB_fprintf(1, stdout, "num_part_alive: %d\n", (int) num_part);

    // Write output
    fwrite(XbInput_getp_xb_state(xb_input), sizeof(int8_t),
           XbInput_get_xb_state__xsize(xb_input), outfile);
    fclose(outfile);

#ifdef COMPILE_TO_BOINC
    // BOINC clean up
    // if (trickle_up) {
    //     boinc_send_trickle_up("example_app", "sample trickle message");
    // }
    // if (trickle_down) {
    //     boinc_sleep(10);
    //     char buf[256];
    //     retval = boinc_receive_trickle_down(buf, sizeof(buf));
    //     if (!retval) {
    //         XB_fprintf(0, stderr, "Got trickle-down message: %s\n", buf);
    //     }
    // }
    boinc_fraction_done(1);
    boinc_finish(0);
#endif

    // Remove checkpoint file
    if (remove(XB_CHECKPOINT_FILE) != 0){
        XB_fprintf(1, stdout, "Warning: Could not remove checkpoint file.\n");
    }
    // return 0;
}


static int64_t XB_track(int8_t* buffer, XbState xb_state, XbInput xb_input, \
                        int64_t ele_start, int64_t num_ele_track, int64_t current_turn, \
                        int64_t total_turns, int64_t checkpoint_every){
    UNUSED(total_turns);
    ElementRefData elem_ref_data = XbInput_getp_line_metadata(xb_input);
    ParticlesData particles = XbState_getp__particles(xb_state);
    track_line(
        buffer,              // int8_t* buffer,
        elem_ref_data,       // ElementRefData elem_ref_data
        particles,           // ParticlesData particles,
        1,                   // int num_turns,
        (int) ele_start,     // int ele_start,
        (int) num_ele_track, // int num_ele_track,
        1,    // int flag_end_turn_actions,
        1,    // int flag_reset_s_at_end_turn,
        0,    // int flag_monitor,
        0,    // int64_t num_ele_line, (needed only for backtracking)
        0.0,  // double line_length, (needed only for backtracking)
        NULL, // int8_t* buffer_tbt_monitor,
        0,    // int64_t offset_tbt_monitor
        NULL  // int8_t* io_buffer,
    );
    current_turn += 1;
    XB_fprintf(2, stdout, "Tracked turn %i\n", current_turn);
    XbState_set__i_turn(xb_state, current_turn);

#ifdef COMPILE_TO_BOINC
    if (report_fraction_done) {
        double fd = (double)current_turn / (double)total_turns;
        if (cpu_time) fd /= 2;
        boinc_fraction_done(fd);
    }
#endif

    if (
#ifdef COMPILE_TO_BOINC
    boinc_time_to_checkpoint() ||
#endif
    (checkpoint_every > 0 && current_turn % checkpoint_every == 0) ){
        int retval = XB_do_checkpoint(xb_input, xb_state);
        if (retval) {
            XB_fprintf(0, stderr, "Checkpointing failed!\n");
            fclose(outfile);
            exit(retval);
        }
#ifdef COMPILE_TO_BOINC
        boinc_checkpoint_completed();
#endif
    }
    return current_turn;
}


static void XB_fprintf(int8_t verbose_level, FILE *stream, char *format, ...) {
    if (verbose >= verbose_level) {
        va_list args;
        va_start(args, format);
#ifdef COMPILE_TO_BOINC
        char buf[256];
        fprintf(stream, "%s ", boinc_msg_prefix(buf, sizeof(buf)));
#endif
        vfprintf(stream, format, args);
        va_end(args);
    }
}


static FILE* XB_fopen(char *filename, const char *mode){
    FILE *fid;
#ifdef COMPILE_TO_BOINC
    char resolved_name[512];
    boinc_resolve_filename(filename, resolved_name, sizeof(resolved_name));
    fid = boinc_fopen(resolved_name, mode);
#else
    fid = fopen(filename, mode);
#endif
    if (!fid) {
#ifdef COMPILE_TO_BOINC
        XB_fprintf(0, stderr, "Could not open file %s (resolved name %s).\n",
            filename, resolved_name);
#else
        XB_fprintf(0, stderr, "Could not open file %s.\n",
            filename);
#endif
        return NULL;
    }
    return fid;
}


static FILE* XB_fopen_allow_null(char *filename, const char *mode){
    FILE *fid;
#ifdef COMPILE_TO_BOINC
    char resolved_name[512];
    boinc_resolve_filename(filename, resolved_name, sizeof(resolved_name));
    fid = boinc_fopen(resolved_name, mode);
#else
    fid = fopen(filename, mode);
#endif
    return fid;
}


static int8_t* XB_file_to_buffer(FILE *fid, int8_t *buf_in){
    if (!fid){
        return NULL;
    }
    // Get buffer
    int8_t *buf;
    fseek(fid, 0L, SEEK_END);
    unsigned long filesize = ftell(fid);
    fseek(fid, 0L, SEEK_SET);
    if (buf_in){
        XB_fprintf(2, stdout, "Reusing buffer.\n");
        buf = buf_in;
    } else {
        buf = (int8_t*)malloc(filesize*sizeof(int8_t));
    }
    fread(buf, sizeof(int8_t), filesize, fid);
    fclose(fid);
    if (!buf){
        XB_fprintf(0, stderr, "Could not allocate buffer!\n");
        return NULL;
    }
    return (buf);
}


static int XB_do_checkpoint(XbInput xb_input, XbState xb_state) {
    FILE *chkp_fid = XB_fopen(XB_CHECKPOINT_FILE, "wb");
    if (!chkp_fid) {
        return 1;
    }
    XB_fprintf(1, stdout, "Checkpointing turn %d\n", (int) XbState_get__i_turn(xb_state));
    fwrite(XbInput_getp_xb_state(xb_input), sizeof(int8_t), XbInput_get_xb_state__xsize(xb_input), chkp_fid);
    fclose(chkp_fid);
    return 0;
}
