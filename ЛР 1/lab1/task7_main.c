#include <stdio.h>
#include "task7_func.h"

int main()
{
	x = 2;
	y = 0.5;
	printf("x = %.3lf\n", x);
	printf("y = %.3lf\n", y);
	f();
	printf("f = %.3lf\n", result);

	printf("Enter X: "); scanf_s("%lf", &x);
	printf("Enter Y: "); scanf_s("%lf", &y);

	f();
	printf("f = %.3lf\n", result);
	return 0;
}
