#include <stdio.h>
#include <stdlib.h>

// x^n
double
powz(double x, int n) {
	double result = 1;
	double r;
	int c;			// 指数, 并且值为 2^m

	if (x == 1) { return 1; }
	if (x == -1) { return (n % 2 == 1) ? -1 : 1; }

	if (n >= 0) { r = x; c = n; }
	else { r = 1 / x; c = -n; }	// (1/x)^n

	while (c != 0) {
		if (c % 2 == 1) {
			// 第一次进入循环体时, 会进行一次判断
			result *= r;
		}
		// 其余循环执行时 c = 2^m 
		r *= r;
		c = c >> 1;
	}

	return result;
}

int
main(void) {
	// test
	printf("pow(2, 5) = %f \n", powz(2, 5));

	return 0;
}
