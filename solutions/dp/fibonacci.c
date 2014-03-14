#include "stdio.h"
#include "stdlib.h"

// using 'dp' to solve fibonacci problem...

int
fibo(int n) {
	if (n == 1 || n == 0)
		return n;
	else
		return (fibo(n-1) + fibo(n-2));
}

int
fib(int n, int *map) {
	if (n == 1 || n == 0) return n;
	else {
		if (map[n-1] == -1) map[n-1] = fib(n-1, map);
		if (map[n-2] == -1) map[n-2] = fib(n-2, map);
		return map[n-1] + map[n-2];
	}
}

void
solution() {
	int i;
	int *map = (int *)malloc(sizeof(int) * 100);
	for(i=0; i<100; i++)
		map[i] = -1;

	int n = 10;	// 'n' must < 100
	printf(">:\\ 1. Fibonacci is %d\n", fib(n, map));

	printf(">:\\ 2. Fibonacci is %d\n", fibo(n));
}

int
main(int argc, char *argv[]) {
	solution();
	return 0;
}
