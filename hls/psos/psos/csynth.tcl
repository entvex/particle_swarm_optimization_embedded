############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project psos
set_top psosc
add_files psos/psos.cpp
add_files psos/psos.h
add_files -tb psos/main.cpp
open_solution "psos"
set_part {xc7z010clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./psos/psos/directives.tcl"
csynth_design