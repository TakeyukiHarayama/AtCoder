SRCS = main.c
OBJS = ${SRCS:.c=.o}
CC = g++ #Compiler
FC = gfortran
LD = g++ #Linker
#LIBS = -lm -L/usr/local/lib -llis #Library Option.Command line option.
LIBS = -lm #Library Option.Command line option.
TARGET = main #name of excutefile

#Run when make no option
all: $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(TARGET) $(LIBS)

#cfile -> Object
.c.o:
	$(CC) $(CCFLAGS) -c $<

#Object -> Headerfile
$(OBJS): $(HEADERS) Makefile

clean:
	rm -f $(TARGET) $(OBJS) *~
