#include <stdio.h> 
#include <math.h> 

double x = 0, y = 0, result = 0;

void f(void) {
	result = ((x - 1) * sqrt(x) - (y - 1) * sqrt(y)) / ((sqrt(pow(x, 3) * y) + x * y + x * x - x));
}

int main()
{
	x = 2;
	y = 0.5;
	printf("x = %.3lf\n", x);
	printf("y = %.3lf\n", y);
	f();
	printf("f = %.3lf\n", result);

	printf("Enter X: "); scanf_s("%f", &x);
	printf("Enter Y: "); scanf_s("%f", &y);

	f();
	printf("f = %.3lf\n", result);

	printf("Enter any key:");
	scanf_s("%f", &result);
	return 0;
}
