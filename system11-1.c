#include <math.h>
#include <stdio.h>

double mysqrt(double x);

int main()
{
	double x;
	printf("\tx\tsqrt x\t\tmysqrt x\n");
	for (x = 1; x <= 10; x += 1)
	{
		printf("\t%3.1f\t%12.10f\t%12.10f\n", x, sqrt(x), mysqrt(x));
	}
	return 0;
}

double mysqrt(double x)
{
	const double eps = 1.0e-10;
	double guess = 1.0;

	while (fabs(guess * guess - x) >= eps)
	{
		guess = (guess + x / guess) / 2.0;
	}
	return guess;
}