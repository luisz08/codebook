SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c = .o)
CC = gcc
#INCLUDES = -I/×××
#LIBS = -L/×××
CCFLAGS = -g -Wall -O

string_test : $(OBJS)
	$(CC) $^ -o $@
#	$(CC) $^ -o $@ $(INCLUDES) $(LIBS)

%.o : %.c
	$(CC) -c $< $(CCFLAGS)
clean:
	rm *.o string_test
.PHONY:clean
