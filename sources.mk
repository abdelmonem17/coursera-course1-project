MSP432_SRCS =		main.c\
			interrupts_msp432p401r_gcc.c\
			memory.c\
			startup_msp432p401r_gcc.c\
			system_msp432p401r.c

MSP432_INCLUDES =	-I./include/CMSIS\
			-I./include/common\
			-I./include/msp432


HOST_SRCS=		./src/main.c\
			./src/memory.c\
			./src/course1.c\
			./src/stats.c\
			./src/data.c

HOST_INCLUDES= 		-I./include/common

