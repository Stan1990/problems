.PHONY: clean

CC = gcc
CFLAGS = -g -Wall -std=c99

OBJS = two_sum.o

twt : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o twt

two_sum.o : global.h two_sum.c
	${CC} ${CFLAGS} -c two_sum.c

clean :
	-rm -rf *.o
	-rm -rf twt
