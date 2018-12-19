############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project floatPrototype
set_top floatPrototypec
add_files floatPrototype/floatPrototype.h
add_files floatPrototype/floatPrototype.cpp
add_files -tb floatPrototype/main.cpp
add_files -tb floatPrototype/floatDriver.h
add_files -tb floatPrototype/floatDriver.cpp
open_solution "floatPrototype"
set_part {xc7z010clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./floatPrototype/floatPrototype/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog -version "3.0" -display_name "floatPrototype"
