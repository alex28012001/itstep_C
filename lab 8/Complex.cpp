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
	double r = (a.real * b.real) - (a.img * b.img);
	double d = (a.real*b.img) + (a.img * b.real);
	return Complex(r, d);
}

Complex operator/(const Complex& a, const Complex& b)
{
	double r = ((a.real*b.real) +(a.img*b.img)) / ((b.real*b.real) + (b.img*b.img));
	double i = ((a.img*b.real) - (a.real*b.img)) / ((b.real*b.real) + (b.img*b.img));
	return Complex(r, i);
}

Complex& Complex::operator+=(const Complex a)
{
	 real += a.real;
	 img += a.img;
	 return *this;
}

Complex& Complex::operator-=(const Complex a)
{
	real -= a.real;
	img -= a.img;
	return *this;
}

Complex& Complex::operator*=(const Complex a)
{
	real *= a.real;
	img *= a.img;
	return *this;
}

Complex& Complex::operator/=(const Complex a)
{
	real /= a.real;
	img /= a.img;
	return *this;
}

void Complex :: operator()(const double r, const double i)
{
	real = r;
	img = i;
}

Complex& Complex::operator++()
{
	++real;
	++img;
	return *this;
}

Complex& Complex::operator++(int)
{
	Complex tmp = *this;
	++tmp.real;
	++tmp.img;
	return tmp;
	
}

Complex& Complex::operator--()
{
	--real;
	--img;
	return *this;
}

Complex& Complex::operator--(int)
{
	Complex tmp = *this;
	--tmp.real;
	--tmp.img;
	return tmp;

}

std::ostream& operator<<(std::ostream& os, const Complex&a)
{
	
	if (a.real == 0)
		os << a.img << "i";
	else if (a.img == 0)
		os << a.real;
	else if (a.img > 0)
		os << a.real << "+" << a.img << "i";
	else
		os << a.real << a.img << "i";
	return os;
}

std::istream& operator>>(std::istream& os, Complex& m1)
{
	os >> m1.real;
	os >> m1.img;
	return os;
}

Complex operator+(const Complex a, const double r)
{
	return Complex(a.real + r, a.img);
}

Complex operator-(const Complex a, const double r)
{
	return Complex(a.real - r, a.img);
}

Complex operator*(const Complex a, const double r)
{
	return Complex(a.real * r, a.img);
}

Complex operator/(const Complex a, const double r)
{
	return Complex(a.real / r, a.img);
}

Complex operator+(const double r, const Complex a)
{
	return Complex(a.real + r, a.img);
}

Complex operator-(const double r, const Complex a)
{
	return Complex(a.real - r, a.img);
}

Complex operator*(const double r, const Complex a)
{
	return Complex(a.real * r, a.img);
}

Complex operator/(const double r, const Complex a)
{
	return Complex(a.real / r, a.img);
}
