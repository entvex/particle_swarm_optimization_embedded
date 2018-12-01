################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
LD_SRCS += \
../src/lscript.ld 

CPP_SRCS += \
../src/Configuration.cpp \
../src/EmbbededSystemX.cpp \
../src/EmbeddedSystemX.cpp \
../src/Failure.cpp \
../src/Initializing.cpp \
../src/Mode1.cpp \
../src/Mode2.cpp \
../src/Mode3.cpp \
../src/OperatingState.cpp \
../src/Operational.cpp \
../src/PowerOnSelfTest.cpp \
../src/Ready.cpp \
../src/RealTimeLoop.cpp \
../src/StateEmbeddedSystemX.cpp \
../src/Suspended.cpp \
../src/TimeLoopState.cpp \
../src/main.cpp 

OBJS += \
./src/Configuration.o \
./src/EmbbededSystemX.o \
./src/EmbeddedSystemX.o \
./src/Failure.o \
./src/Initializing.o \
./src/Mode1.o \
./src/Mode2.o \
./src/Mode3.o \
./src/OperatingState.o \
./src/Operational.o \
./src/PowerOnSelfTest.o \
./src/Ready.o \
./src/RealTimeLoop.o \
./src/StateEmbeddedSystemX.o \
./src/Suspended.o \
./src/TimeLoopState.o \
./src/main.o 

CPP_DEPS += \
./src/Configuration.d \
./src/EmbbededSystemX.d \
./src/EmbeddedSystemX.d \
./src/Failure.d \
./src/Initializing.d \
./src/Mode1.d \
./src/Mode2.d \
./src/Mode3.d \
./src/OperatingState.d \
./src/Operational.d \
./src/PowerOnSelfTest.d \
./src/Ready.d \
./src/RealTimeLoop.d \
./src/StateEmbeddedSystemX.d \
./src/Suspended.d \
./src/TimeLoopState.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 g++ compiler'
	arm-none-eabi-g++ -Wall -O0 -g3 -I"C:\Users\Entvex\Desktop\Assignment3_HW\lab1\lab1.sdk\CppTestRtos\src\os" -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I../../freertos901_xilinx_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


