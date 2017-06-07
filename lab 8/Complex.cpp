#include "Complex.h"
#include<iostream>

Complex& Complex:: operator=(const Complex&a)
{
	if (this == &a)
	{
		return *this;
	}

	real = a.real;
	img = a.img;

	return *this;
}

Complex operator+(const Complex&a, const Complex&b)
{
	return Complex(a.real + b.real, a.img + b.img);
}

Complex operator-(const Complex&a, const Complex&b)
{
	return Complex(a.real - b.real, a.img - b.img);
}

Complex operator*(const Complex&a, const Complex&b)
{
	float r = (a.real * b.real) - (a.img * b.img);
	float d = (a.real*b.img) + (a.img * b.real);
	return Complex(r, d);
}
