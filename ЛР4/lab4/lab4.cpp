// lab4.cpp : Defines the entry point for the application.
//

#include "lab4.h"
#include "Complex.cpp"

using namespace std;

int main()
{
	Complex c = Complex(10.0, 30.0);
	cout << c << endl;

	Complex c1 = Complex(5.0, 25.0);

	Complex c2 = c + c1;
	Complex c3 = c - c1;
	cout << endl;

	cout << "c2:" << endl;
	cout << c2 << endl;

	cout << "c3:" << endl;
	cout << c3 << endl;
	
	return 0;
}
