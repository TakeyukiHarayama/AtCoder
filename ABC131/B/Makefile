SRCS = main.cpp
OBJS = ${SRCS:.cpp=.o}
CC = g++ #Compiler
LD = g++ #Linker
#LIBS = -lm -L/usr/local/lib -llis #Library Option.Command line option.
LIBS = -lm #Library Option.Command line option.
TARGET = main #name of excutefile

#Run when make no option
all: $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(TARGET) $(LIBS)

clean:
	rm -f $(TARGET) $(OBJS) *~
