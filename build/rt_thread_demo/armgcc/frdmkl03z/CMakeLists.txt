INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Os")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m0plus")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Os")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m0plus")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MKL03Z32VFK4")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DTWR_K64F120M")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Os")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m0plus")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MKL03Z32VFK4")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DTWR_K64F120M")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m0plus")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__ram_vector_table__=1")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wl,--start-group")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -lnosys")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -lm")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -lc")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -lgcc")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wl,--end-group")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -lm")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Os")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__ram_vector_table__=1")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wl,--start-group")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -lnosys")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -lm")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -lc")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -lgcc")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wl,--end-group")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -lm")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Os")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/common/sgtl5000)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/common/phyksz8041)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/system/src/clock/MKL03Z4)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/rt_app)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/drivers/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/hal/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/rtos)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/osa/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/CMSIS/Include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/system/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src)

include_directories(${ProjDirPath}/../../../../components/drivers/include/drivers)

include_directories(${ProjDirPath}/../../../../components/drivers/include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/driver_wrapper/inc)

include_directories(${ProjDirPath}/../../../../include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/common/sgtl5000)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/common/phyksz8041)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/system/src/clock/MKL03Z4)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/rt_app)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/drivers/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/hal/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/rtos)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/osa/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/CMSIS/Include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/system/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/inc)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src)

include_directories(${ProjDirPath}/../../../../components/drivers/include/drivers)

include_directories(${ProjDirPath}/../../../../components/drivers/include)

include_directories(${ProjDirPath}/../../../../bsp/kinetis/driver_wrapper/inc)

include_directories(${ProjDirPath}/../../../../include)

add_executable(rt_thread_demo.elf 
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/gcc/startup_MKL03Z4.S"
"${ProjDirPath}/../../../../libcpu/arm/cortex-m0/context_gcc.S"
"${ProjDirPath}/../../../../bsp/kinetis/driver_wrapper/lpuart/drv_lpuart.c"
"${ProjDirPath}/../../../../bsp/kinetis/driver_wrapper/inc/drv_lpuart.h"
"${ProjDirPath}/../../../../bsp/kinetis/driver_wrapper/lpuart/fsl_lpuart_irq_rt.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/rtconfig.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
"${ProjDirPath}/../../../../components/drivers/src/completion.c"
"${ProjDirPath}/../../../../components/drivers/src/pipe.c"
"${ProjDirPath}/../../../../components/drivers/src/portal.c"
"${ProjDirPath}/../../../../components/drivers/src/ringbuffer.c"
"${ProjDirPath}/../../../../components/drivers/src/workqueue.c"
"${ProjDirPath}/../../../../components/drivers/src/dataqueue.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
"${ProjDirPath}/../../../../components/drivers/serial/serial.c"
"${ProjDirPath}/../../../../components/drivers/include/drivers/serial.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
"${ProjDirPath}/../../../../src/clock.c"
"${ProjDirPath}/../../../../src/device.c"
"${ProjDirPath}/../../../../src/idle.c"
"${ProjDirPath}/../../../../src/ipc.c"
"${ProjDirPath}/../../../../src/irq.c"
"${ProjDirPath}/../../../../src/kservice.c"
"${ProjDirPath}/../../../../src/mem.c"
"${ProjDirPath}/../../../../src/memheap.c"
"${ProjDirPath}/../../../../src/mempool.c"
"${ProjDirPath}/../../../../src/module.c"
"${ProjDirPath}/../../../../src/object.c"
"${ProjDirPath}/../../../../src/scheduler.c"
"${ProjDirPath}/../../../../src/slab.c"
"${ProjDirPath}/../../../../src/thread.c"
"${ProjDirPath}/../../../../src/timer.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src/fsl_debug_console.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/inc/fsl_debug_console.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src/print_scan.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src/print_scan.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/utilities/src/fsl_misc_utilities.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
"${ProjDirPath}/../../../../bsp/kinetis/rt_app/application.c"
"${ProjDirPath}/../../../../bsp/kinetis/rt_app/startup_app.c"
"${ProjDirPath}/../../../../bsp/kinetis/rt_app/board_app.c"
"${ProjDirPath}/../../../../bsp/kinetis/rt_app/board_app.h"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
"${ProjDirPath}/../../../../libcpu/arm/cortex-m0/cpuport.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
"${ProjDirPath}/../../../../libcpu/arm/common/backtrace.c"
"${ProjDirPath}/../../../../libcpu/arm/common/div0.c"
"${ProjDirPath}/../../../../libcpu/arm/common/showmem.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/startup/system_MKL03Z4.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.c"
"${ProjDirPath}/../../../../bsp/kinetis/platform/devices/startup.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/gpio_pins.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/board.h"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.c"
"${ProjDirPath}/../../../../bsp/kinetis/boards/frdmkl03z/pin_mux.h"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/linker/gcc/MKL03Z32xxx4_flash.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/../../../../bsp/kinetis/platform/devices/MKL03Z4/linker/gcc/MKL03Z32xxx4_flash.ld -static")

TARGET_LINK_LIBRARIES(rt_thread_demo.elf -Wl,--start-group)
target_link_libraries(rt_thread_demo.elf debug nosys)

target_link_libraries(rt_thread_demo.elf debug m)

target_link_libraries(rt_thread_demo.elf debug c)

target_link_libraries(rt_thread_demo.elf debug gcc)

target_link_libraries(rt_thread_demo.elf optimized nosys)

target_link_libraries(rt_thread_demo.elf optimized m)

target_link_libraries(rt_thread_demo.elf optimized c)

target_link_libraries(rt_thread_demo.elf optimized gcc)

TARGET_LINK_LIBRARIES(rt_thread_demo.elf -Wl,--end-group)

# BIN AND HEX
ADD_CUSTOM_COMMAND(TARGET rt_thread_demo.elf POST_BUILD COMMAND ${CMAKE_OBJCOPY}
-Oihex ${EXECUTABLE_OUTPUT_PATH}/rt_thread_demo.elf ${EXECUTABLE_OUTPUT_PATH}/rt_thread_demo.hex)
ADD_CUSTOM_COMMAND(TARGET rt_thread_demo.elf POST_BUILD COMMAND ${CMAKE_OBJCOPY}
-Obinary ${EXECUTABLE_OUTPUT_PATH}/rt_thread_demo.elf ${EXECUTABLE_OUTPUT_PATH}/rt_thread_demo.bin)
