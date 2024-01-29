// copyright ############################### #
// This file is part of the Xboinc Package.  #
// Copyright (c) CERN, 2023.                 #
// ######################################### #

// This file provides the necessary xsuite functions to main.c

#ifndef XB_XTRACK_HEADERS
#define XB_XTRACK_HEADERS

typedef struct ElementRefData_s * ElementRefData;
typedef struct ParticlesData_s * ParticlesData;
void track_line(int8_t*,ElementRefData,ParticlesData,int,int,int,int,int,int,int,double,int8_t*,int64_t,int8_t*);

typedef struct SimState_s * SimState;
int64_t SimState_get__i_turn(const SimState);
void SimState_set__i_turn(SimState,int64_t);
ParticlesData SimState_getp__particles(SimState);
int64_t SimState_get__particles__capacity(const SimState);
int64_t SimState_get__particles_state(const SimState,int64_t);

typedef struct SimConfig_s * SimConfig;
int64_t SimConfig_get__version_xboinc_version(const SimConfig);
int64_t SimConfig_get_sim_state__version_xboinc_version(const SimConfig);
int64_t SimConfig_get_checkpoint_every(const SimConfig);
ElementRefData SimConfig_getp_line_metadata(SimConfig);
int64_t SimConfig_get_num_turns(const SimConfig);
int64_t SimConfig_get_num_elements(const SimConfig);
SimState SimConfig_getp_sim_state(SimConfig);
int64_t SimConfig_get_sim_state__xsize(const SimConfig);

#endif /* XB_XTRACK_HEADERS */
