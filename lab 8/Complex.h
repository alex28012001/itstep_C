#pragma once
class Complex
{
	double real;
	double img;

public:
	Complex(): real(0), img(0) {};
	Complex(const double r,const double i) : real(r), img(i) {};
	Complex(const Complex&a) : real(a.real), img(a.img) {};

	~Complex() {};


	Complex& operator=(const Complex&a);
	friend Complex operator+(const Complex&a, const Complex&b);
	friend Complex operator-(const Complex&a, const Complex&b);
	friend Complex operator*(const Complex&a, const Complex&b);

};

