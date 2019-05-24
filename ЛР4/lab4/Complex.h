#ifndef COMPLEX_H
#define COMPLEX_H

#include "math.h"
#include <iostream>

#define PI 3.14

using namespace std;

double module_r(double re, double im)
{
	return sqrtf(re * re + im * im);
}

double arg_phi(double re, double im)
{
	if (re > 0)
	{
		return atanf(im / re);
	}
	else if (re < 0 && im > 0)
	{
		return PI + atanf(im / re);
	}
	else if (re < 0 && im < 0)
	{
		return -PI + atanf(im / re);
	}
	else return 0;
}

class Complex {
private:
	double r;
	double phi;
public:
	Complex();
	Complex(double _r, double _phi);

	double Re() const;
	double Im() const;
	double R() const;
	double Phi() const;

	Complex& operator+ (const Complex& rhs)
	{
		double re = this->Re();
		double im = this->Im();

		double re2 = rhs.Re();
		double im2 = rhs.Im();

		return Complex(module_r(re + re2, im + im2), arg_phi(re + re2, im + im2));
	};
	Complex& operator - (const Complex& rhs)
	{
		double re = this->Re();
		double im = this->Im();

		double re2 = rhs.Re();
		double im2 = rhs.Im();

		return Complex(module_r(re - re2, im - im2), arg_phi(re - re2, im - im2));
	};
	//Complex operator * (Complex);
	//Complex operator / (Complex);

	friend Complex* operator + (const Complex& lhs, const Complex& rhs);
	//friend Complex operator - (const Complex& lhs, const Complex& rhs);
	//friend Complex operator * (const Complex& lhs, const Complex& rhs);
	//friend Complex operator / (const Complex& lhs, const Complex& rhs);

	Complex* tg(const Complex& z);

	///operator double();
	friend std::ostream& operator << (std::ostream& out, const Complex& a);
};

#endif
