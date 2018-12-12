################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/activeObject/ApplicationModeSettingThread.cpp \
../src/activeObject/QueueScheduler.cpp \
../src/activeObject/RealTimeLoop.cpp \
../src/activeObject/SimulateRealTimeStateThread.cpp \
../src/activeObject/SimulationThread.cpp \
../src/activeObject/ThreadManager.cpp \
../src/activeObject/simCount.cpp 

OBJS += \
./src/activeObject/ApplicationModeSettingThread.o \
./src/activeObject/QueueScheduler.o \
./src/activeObject/RealTimeLoop.o \
./src/activeObject/SimulateRealTimeStateThread.o \
./src/activeObject/SimulationThread.o \
./src/activeObject/ThreadManager.o \
./src/activeObject/simCount.o 

CPP_DEPS += \
./src/activeObject/ApplicationModeSettingThread.d \
./src/activeObject/QueueScheduler.d \
./src/activeObject/RealTimeLoop.d \
./src/activeObject/SimulateRealTimeStateThread.d \
./src/activeObject/SimulationThread.d \
./src/activeObject/ThreadManager.d \
./src/activeObject/simCount.d 


# Each subdirectory must supply rules for building sources it contributes
src/activeObject/%.o: ../src/activeObject/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 g++ compiler'
	arm-none-eabi-g++ -Wall -O0 -g3 -I"D:\git\particle_swarm_optimization_embedded\Assignment4_HW\lab4\lab1.sdk\CppTestRtos\src\os" -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I../../freertos901_xilinx_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


