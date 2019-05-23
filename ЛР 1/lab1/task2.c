#include <stdio.h>
#include <math.h> 

double f(double x, double y) {
	return ((x - 1) * sqrt(x) - (y - 1) * sqrt(y)) / ((sqrt(pow(x, 3) * y) + x * y + x * x - x));
}

int main()
{
	float x, y;
	x = 2;
	y = 0.5;
	printf("x = %.3lf\n", x);
	printf("y = %.3lf\n", y);
	printf("f = %.3lf\n", f(x, y));

	printf("Enter X: "); scanf_s("%f", &x);
	printf("Enter Y: "); scanf_s("%f", &y);

	printf("f = %.3lf\n", f(x, y));
	return 0;
}
