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

typedef struct SimStateData_s * SimStateData;
int64_t SimStateData_get_i_turn(const SimStateData);
void SimStateData_set_i_turn(SimStateData,int64_t);
ParticlesData SimStateData_getp_particles(SimStateData);
int64_t SimStateData_get_particles__capacity(const SimStateData);
int64_t SimStateData_get_particles_state(const SimStateData,int64_t);

typedef struct SimConfig_s * SimConfig;
int64_t SimConfig_get_sim_state_version_xboinc_version(const SimConfig);
int64_t SimConfig_get_checkpoint_every(const SimConfig);
ElementRefData SimConfig_getp_line_metadata(SimConfig);
int64_t SimConfig_get_num_turns(const SimConfig);
int64_t SimConfig_get_num_elements(const SimConfig);
SimStateData SimConfig_getp_sim_state(SimConfig);
int64_t SimConfig_get_sim_state_size(const SimConfig);

#endif /* XB_XTRACK_HEADERS */
