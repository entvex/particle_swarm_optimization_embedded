################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
LD_SRCS += \
../src/lscript.ld 

CPP_SRCS += \
../src/Command.cpp \
../src/Configuration.cpp \
../src/EmbeddedSystemX.cpp \
../src/Failure.cpp \
../src/Initializing.cpp \
../src/OperatingState.cpp \
../src/Operational.cpp \
../src/PowerOnSelfTest.cpp \
../src/Ready.cpp \
../src/Simulate.cpp \
../src/StartCommand.cpp \
../src/StateEmbeddedSystemX.cpp \
../src/Suspended.cpp \
../src/main.cpp 

OBJS += \
./src/Command.o \
./src/Configuration.o \
./src/EmbeddedSystemX.o \
./src/Failure.o \
./src/Initializing.o \
./src/OperatingState.o \
./src/Operational.o \
./src/PowerOnSelfTest.o \
./src/Ready.o \
./src/Simulate.o \
./src/StartCommand.o \
./src/StateEmbeddedSystemX.o \
./src/Suspended.o \
./src/main.o 

CPP_DEPS += \
./src/Command.d \
./src/Configuration.d \
./src/EmbeddedSystemX.d \
./src/Failure.d \
./src/Initializing.d \
./src/OperatingState.d \
./src/Operational.d \
./src/PowerOnSelfTest.d \
./src/Ready.d \
./src/Simulate.d \
./src/StartCommand.d \
./src/StateEmbeddedSystemX.d \
./src/Suspended.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 g++ compiler'
	arm-none-eabi-g++ -Wall -O0 -g3 -I"D:\git\particle_swarm_optimization_embedded\Assignment4_HW\lab1\lab1.sdk\CppTestRtos\src\os" -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I../../freertos901_xilinx_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


