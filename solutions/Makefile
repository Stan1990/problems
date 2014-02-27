.PHONY: clean

CC = gcc
CFLAGS = -g -Wall -std=c99

OBJS = two_sum.o

all : twt pow

pow : ${OBJS}
	${CC} ${CFLAGS} pow.c -o pow

twt : ${OBJS}
	${CC} ${CFLAGS} two_sum.c -o two_sum

two_sum.o : global.h two_sum.c
	${CC} ${CFLAGS} -c two_sum.c

clean :
	-rm -rf *.o
	-rm -rf two_sum
	-rm -rf pow
