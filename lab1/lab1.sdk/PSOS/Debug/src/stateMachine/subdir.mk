################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/stateMachine/Context.cpp \
../src/stateMachine/FindMaxima.cpp \
../src/stateMachine/FindMinima.cpp \
../src/stateMachine/Setup.cpp \
../src/stateMachine/State.cpp 

OBJS += \
./src/stateMachine/Context.o \
./src/stateMachine/FindMaxima.o \
./src/stateMachine/FindMinima.o \
./src/stateMachine/Setup.o \
./src/stateMachine/State.o 

CPP_DEPS += \
./src/stateMachine/Context.d \
./src/stateMachine/FindMaxima.d \
./src/stateMachine/FindMinima.d \
./src/stateMachine/Setup.d \
./src/stateMachine/State.d 


# Each subdirectory must supply rules for building sources it contributes
src/stateMachine/%.o: ../src/stateMachine/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 g++ compiler'
	arm-none-eabi-g++ -Wall -O0 -g3 -I"C:\Users\black\Downloads\lab1\lab1.sdk\PSOS\src\os" -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I../../freertos901_xilinx_bsp/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


