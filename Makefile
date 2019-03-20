#-----------------------------------------------------------------------
include sources.mk

PLATFORM=HOST
TARGET=C1M1
PASSWORD=-DCOURSE1
INFO=VERBOSE
ifeq ($(PLATFORM),MSP432)
	# Arcitectures spacific flags
	
	CPU=cortex-m4 -mthumb
	ARCH=armv7e-m
	SPECS=nosys.specs
	FLOAT-ABI=hard
	FPU=fpv4-sp-d16
	GNU=arm-none-eabi
	# Compiler flags
	CC=$(GNU)-gcc
	CFLAGS=-Wall -Werror -g -O0 -std=c99 \
	-mcpu=$(CPU) -march=$(ARCH) -mfloat-abi=$(FLOAT-ABI) \
	-mfpu=$(FPU) --specs=$(SPECS)
	#Linker flags
	LD=$(GNU)-ld
	LINKER_FILE=../msp432p401r.lds
	LDFLAGS=-Wl,-T $(LINKER_FILE)  -Wl,-Map=$(TARGET).map
	
	SRCS=$(MSP432_SRCS)
	INCLUDES=$(MSP432_INCLUDES)
	CPPFLAGS=-DMSP432 -D$(INFO) -D$(PASSWORD) $(INCLUDES)
	

else
	GNU=
	CC=$(GNU)-gcc
	SRCS=$(HOST_SRCS)
	INCLUDES=$(HOST_INCLUDES)
	CFLAGS=-Wall -Werror -g -O0 -std=c99 
	LDFLAGS=-Wl,-Map=$(TARGET).map
	ifeq ($(PLATFORM),HOST)
		CPPFLAGS=-DHOST -DVERBOSE $(PASSWORD) $(INCLUDES)
	endif
endif


size_info=$(GNU)-size

OBJS=$(SRCS:.c=.o)


%.i:%.c
	$(CC) -E $(CPPFLAGS) $(CFLAGS) $< -o $@

%.asm:%.c
	$(CC) -S $(CPPFLAGS) $(CFLAGS) $< -o $@

%.o:%.c
	$(CC) -c $(CPPFLAGS)  $(CFLAGS)  $< -o $@  
%.d:%.c
	$(CC) -MM $(CPPFLAGS) $(CFLAGS)  $*.c -o $*.d

.PHONEY:build
build:all
.PHONEY:all
all:$(TARGET).out
$(TARGET).out:$(OBJS)
	$(CC) $(OBJS) $(CPPFLAGS) $(CFLAGS) $(INCLUDES) $(LDFLAGS) -o $@
	$(size_info) -Atd $(TARGET).out
	$(size_info) -Btd $(TARGET).out
	$(size_info) -Btd $(OBJS)

.PHONEY:run
run:
	./$(TARGET).out

.PHONEY:clean
clean:
	rm -f $(TARGET).map $(TARGET).out *.d *.asm *.o *.i


