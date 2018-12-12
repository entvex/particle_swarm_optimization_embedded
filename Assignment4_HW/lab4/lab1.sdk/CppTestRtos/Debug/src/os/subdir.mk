################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/os/Mutex.cpp \
../src/os/Semaphore.cpp \
../src/os/Thread.cpp 

OBJS += \
./src/os/Mutex.o \
./src/os/Semaphore.o \
./src/os/Thread.o 

CPP_DEPS += \
./src/os/Mutex.d \
./src/os/Semaphore.d \
./src/os/Thread.d 


# Each subdirectory must supply rules for building sources it contributes
src/os/%.o: ../src/os/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 g++ compiler'
	arm-none-eabi-g++ -Wall -O0 -g3 -I"D:\git\particle_swarm_optimization_embedded\Assignment4_HW\lab4\lab1.sdk\CppTestRtos\src\os" -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I../../freertos901_xilinx_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


