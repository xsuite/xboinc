// This file is part of BOINC.
// http://boinc.berkeley.edu
// Copyright (C) 2008 University of California
//
// BOINC is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.
//
// BOINC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with BOINC.  If not, see <http://www.gnu.org/licenses/>.

// command line options
// --cpu_time N: use about N CPU seconds after copying files
// --critical_section: run most of the time in a critical section
// --early_exit: exit(10) after 30 chars
// --early_crash: crash after 30 chars
// --run_slow: sleep 1 second after each character
// --trickle_up: sent a trickle-up message
// --trickle_down: receive a trickle-up message
// --network_usage: tell the client we used some network

#include <stdio.h>
#ifndef NULL
    #define NULL 0
#endif
#include <math.h>

#include "xtrack_tracker.h"
#include "sim_config.h"

#ifdef _WIN32
#include "boinc_win.h"
#else
#include "config.h"
#include <cstdio>
#include <cctype>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <csignal>
#include <unistd.h>
#endif

#include "str_util.h"
#include "util.h"
#include "filesys.h"
#include "boinc_api.h"
#include "mfile.h"
#include "graphics2.h"
#include "xtrack.h"

#include <iostream>

#ifdef APP_GRAPHICS
UC_SHMEM* shmem;
#endif

using std::string;

#define CHECKPOINT_FILE "checkpoint.bin"
#define INPUT_FILENAME "xboinc_input.bin"
#define OUTPUT_FILENAME "out"

bool run_slow = false;
bool early_exit = false;
bool early_crash = false;
bool early_sleep = false;
bool trickle_up = false;
bool trickle_down = false;
bool critical_section = false;    // run most of the time in a critical section
bool report_fraction_done = true;
bool network_usage = false;
double cpu_time = 20, comp_result;

int8_t* file_to_buffer(FILE* sim_fid, int8_t* buf_in){
    
    //FILE *sim_fid;
    int8_t *buf;

    // Get buffer
    //sim_fid = fopen(filename, "rb");
    if (!sim_fid){
        return NULL;
    }
    fseek(sim_fid, 0L, SEEK_END);
    unsigned long filesize = ftell(sim_fid);
    fseek(sim_fid, 0L, SEEK_SET);
    if (buf_in){
        printf("Reusing buffer\n");
        buf = buf_in;
    }
    else{
        buf = (int8_t*)malloc(filesize*sizeof(int8_t));
    }
    fread(buf, sizeof(int8_t), filesize, sim_fid);
    fclose(sim_fid);

    return (buf);
}

int do_checkpoint(SimConfig sim_config, SimStateData sim_state) {

    int retval;
    FILE *chkp_fid;
    char resolved_name[512], buf[256];

    boinc_resolve_filename(CHECKPOINT_FILE, resolved_name, sizeof(resolved_name));

    chkp_fid = boinc_fopen(resolved_name, "wb");
    if (!chkp_fid) {
        fprintf(stderr,
            "%s Couldn't find checkpoint file, name %s.\n",
            boinc_msg_prefix(buf, sizeof(buf)), resolved_name);
        return 1;
    }

    printf("Checkpointing turn %d!\n", (int) SimStateData_get_i_turn(sim_state));

    fwrite(SimConfig_getp_sim_state(sim_config), sizeof(int8_t), SimConfig_get_sim_state_size(sim_config), chkp_fid);

    fclose(chkp_fid);

    return 0;
}


int main(int argc, char **argv) {
    int i;
    int c, nchars = 0, retval, n;
    double fsize, fd;
    char input_path[512], output_path[512], chkpt_path[512], buf[256];
    FILE* out;
    FILE* state, *infile;

    for (i=0; i<argc; i++) {
        if (strstr(argv[i], "early_exit")) early_exit = true;
        if (strstr(argv[i], "early_crash")) early_crash = true;
        if (strstr(argv[i], "early_sleep")) early_sleep = true;
        if (strstr(argv[i], "run_slow")) run_slow = true;
        if (strstr(argv[i], "critical_section")) critical_section = true;
        if (strstr(argv[i], "network_usage")) network_usage = true;
        if (strstr(argv[i], "cpu_time")) {
            cpu_time = atof(argv[++i]);
        }
        if (strstr(argv[i], "trickle_up")) trickle_up = true;
        if (strstr(argv[i], "trickle_down")) trickle_down = true;
    }
    retval = boinc_init();
    if (retval) {
        fprintf(stderr, "%s boinc_init returned %d\n",
            boinc_msg_prefix(buf, sizeof(buf)), retval
        );
        exit(retval);
    }

    fprintf(stderr, "%s app started; CPU time %f, flags:%s%s%s%s%s%s%s\n",
        boinc_msg_prefix(buf, sizeof(buf)),
        cpu_time,
        early_exit?" early_exit":"",
        early_crash?" early_crash":"",
        early_sleep?" early_sleep":"",
        run_slow?" run_slow":"",
        critical_section?" critical_section":"",
        trickle_up?" trickle_up":"",
        trickle_down?" trickle_down":""
    );

    // open the input file (resolve logical name first)
    //
    boinc_resolve_filename(INPUT_FILENAME, input_path, sizeof(input_path));
    infile = boinc_fopen(input_path, "rb");
    if (!infile) {
        fprintf(stderr,
            "%s Couldn't find input file, resolved name %s.\n",
            boinc_msg_prefix(buf, sizeof(buf)), input_path
        );
        exit(-1);
    }
    boinc_resolve_filename(OUTPUT_FILENAME, output_path, sizeof(output_path));

    if (network_usage) {
        boinc_network_usage(5., 17.);
    }

    // Read input file
    int8_t* sim_buffer = file_to_buffer(infile, NULL);
    if (!sim_buffer){
        printf("Error: could not read simulation input file\n");
        return -1;
    }

    // Get sim config
    SimConfig sim_config = (SimConfig) sim_buffer;

    const int64_t num_turns = SimConfig_get_num_turns(sim_config);
    const int64_t num_elements = SimConfig_get_num_elements(sim_config);

    printf("num_turns: %d\n", (int) num_turns);
    printf("num_elements: %d\n", (int) num_elements);

    ParticlesData particles = SimConfig_getp_sim_state_particles(sim_config);
    SimStateData sim_state = SimConfig_getp_sim_state(sim_config);
    int64_t checkpoint_every = SimConfig_get_checkpoint_every(sim_config);

    // See if there's a valid checkpoint file.
    boinc_resolve_filename(CHECKPOINT_FILE, chkpt_path, sizeof(chkpt_path));
    state = boinc_fopen(chkpt_path, "rb");
    printf("sim_state: %p\n", (int8_t*) sim_state);
    int8_t* loaded = file_to_buffer(state, (int8_t*) sim_state);
    if (loaded){
        printf("Loaded checkpoint\n");
    }
    else{
        printf("No checkpoint found\n");
    }

    // Check on the output file
    out = boinc_fopen(output_path, "wb");
    if (!out) {
        fprintf(stderr, "%s APP: xtrack output file failed: %s.\n",
            boinc_msg_prefix(buf, sizeof(buf)), output_path);
        exit(1);
    }

    // !!!!!!!!  MAIN LOOP  !!!!!!!!!!!!!!!!
    while (SimStateData_get_i_turn(sim_state) < num_turns){
        track_line(
            sim_buffer, //    int8_t* buffer,
            SimConfig_getp_line_metadata(sim_config), //ElementRefData elem_ref_data
            particles, //    ParticlesData particles,
            1, //    int num_turns,
            0, //    int ele_start,
            (int) num_elements, //    int num_ele_track,
            1, //int flag_end_turn_actions,
            0, //int flag_reset_s_at_end_turn,
            0, //    int flag_monitor,
            0, //   int64_t num_ele_line, (needed only for backtracking)
            0.0, //    double line_length, (needed only for backtracking)
            NULL,//    int8_t* buffer_tbt_monitor,
            0, //    int64_t offset_tbt_monitor
            NULL//    int8_t* io_buffer,
        );
        SimStateData_set_i_turn(sim_state, SimStateData_get_i_turn(sim_state) + 1);

        if ( boinc_time_to_checkpoint() || 
	   (checkpoint_every > 0 && SimStateData_get_i_turn(sim_state) % checkpoint_every == 0) ){
	   retval = do_checkpoint(sim_config, sim_state);
           if (retval) {
	      fprintf(stderr, "%s APP: xtrack checkpoint failed %d\n", boinc_msg_prefix(buf, sizeof(buf)));
	      exit(retval);
	   }
           boinc_checkpoint_completed();
        }

	if (report_fraction_done) {
	    fd = (int)SimStateData_get_i_turn(sim_state) / (int)num_turns;
	    if (cpu_time) fd /= 2;
	    boinc_fraction_done(fd);
	}
	
    }

    // Quick check
    //for (int ii=0; ii<ParticlesData_get__capacity(particles); ii++){
    //    printf("s[%d] = %e\n", ii, ParticlesData_get_s(particles, (int64_t) ii));
    //}

    // Write output
    fwrite(SimConfig_getp_sim_state(sim_config), sizeof(int8_t), SimConfig_get_sim_state_size(sim_config), out);
    fclose(out);

    if (trickle_up) {
        boinc_send_trickle_up(
            const_cast<char*>("example_app"),
            const_cast<char*>("sample trickle message")
        );
    }

    if (trickle_down) {
        boinc_sleep(10);
        retval = boinc_receive_trickle_down(buf, sizeof(buf));
        if (!retval) {
            fprintf(stderr, "Got trickle-down message: %s\n", buf);
        }
    }


    boinc_fraction_done(1);

    boinc_finish(0);
}

