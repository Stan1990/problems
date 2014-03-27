.PHONY: clean

CC = gcc
CFLAGS = -g -Wall -std=c99

all : twt pow triangle
	-mv $^ bin

pow : pow.c
	${CC} $(CFLAGS) $^ -o $@

twt : two_sum.c
	${CC} $(CFLAGS) $^ -o $@

triangle : dp/triangle.c
	${CC} $(CFLAGS) $^ -o $@

clean :
	-rm -rf bin/*
