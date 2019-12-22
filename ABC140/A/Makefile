SRCS = main.c
OBJS = ${SRCS:.c=.o}
CC = g++
LD = g++
LIBS = -lm
TARGET = main

all: $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(TARGET) $(LIBS)

.c.o:
	$(CC) $(CCFLAGS) -c $<

$(OBJS): $(HEADERS) Makefile

clean:
	rm -f $(TARGET) $(OBJS) *~