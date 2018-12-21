############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project particle
set_top particlemaster
add_files particle/Particles.h
add_files particle/Particles.cpp
add_files particle/ParticleMaster.h
add_files particle/ParticleMaster.cpp
add_files -tb particle/main.cpp
add_files -tb particle/psosDriver.cpp
add_files -tb particle/psosDriver.h
open_solution "particle"
set_part {xc7z010clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./particle/particle/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
