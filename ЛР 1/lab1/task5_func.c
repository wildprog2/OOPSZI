#include <math.h> 

double f(double x, double y) {
	return ((x - 1) * sqrt(x) - (y - 1) * sqrt(y)) / ((sqrt(pow(x, 3) * y) + x * y + x * x - x));
}
