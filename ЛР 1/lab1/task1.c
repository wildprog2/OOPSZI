#include <stdio.h>
#include <math.h> 

int main()
{
	float x, y;
	x = 2;
	y = 0.5;
	printf("x = %.3lf\n", x);
	printf("y = %.3lf\n", y);
	printf("f = %.3lf\n", ((x - 1) * sqrt(x) - (y - 1) * sqrt(y)) / ((sqrt(pow(x, 3) * y) + x * y + x * x - x)) );

	printf("Enter X: "); scanf_s("%f", &x);
	printf("Enter Y: "); scanf_s("%f", &y);

	printf("f = %.3lf\n", ((x - 1) * sqrt(x) - (y - 1) * sqrt(y)) / ((sqrt(pow(x, 3) * y) + x * y + x * x - x)) );
	return 0;
}
