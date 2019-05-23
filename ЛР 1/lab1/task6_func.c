#include <math.h>

double x = 0, y = 0, result = 0;

void f(void) {
	result = ((x - 1) * sqrt(x) - (y - 1) * sqrt(y)) / ((sqrt(pow(x, 3) * y) + x * y + x * x - x));
}
