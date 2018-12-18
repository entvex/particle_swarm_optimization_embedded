############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project particles.prj
set_top particlemaster
add_files particles.prj/ParticleMaster.cpp
add_files particles.prj/ParticleMaster.h
add_files particles.prj/Particles.cpp
add_files particles.prj/Particles.h
add_files -tb particles.prj/main.cpp
open_solution "solution1"
set_part {xc7z010clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./particles.prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
