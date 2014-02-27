.PHONY: clean

CC = gcc
CFLAGS = -g -Wall

OBJS = 

all : base_sort

base_sort : base_sort.c
	${CC} ${CFLAGS} $^ -o $@

clean :
	-rm -rf *.o
	-rm -rf base_sort
