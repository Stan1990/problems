.PHONY: clean

CC = gcc
CFLAGS = -g -Wall -std=c99

all : fibonacci

pow : ${OBJS}
	${CC} ${CFLAGS} fibonacci.c -o fibonacci

clean :
	-rm -rf *.o
	-rm -rf fibonacci
