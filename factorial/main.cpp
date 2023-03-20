#include <stdio.h>

double factorial_iter(double n) {
	double result = 1;
	for (double i = 1; i <= n; i++)		result *= i;
	return result;
}

double factorial_rec(double n) {
	if (n == 0 || n == 1)	return 1;
	else	return n * factorial_rec(n - 1);
}

int main() {
	int n = 20;
	double result_iter = factorial_iter(n);
	printf("Iterative factorial result : %.f\n", factorial_iter(n));
	double result_rec = factorial_rec(n);
	printf("Recursive factorial result : %.f\n", factorial_rec(n));
	return 0;
}