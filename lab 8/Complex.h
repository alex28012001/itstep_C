#pragma once
#include<iostream>
class Complex
{
	double real;
	double img;

public:
	Complex() : real(0), img(0) {};
	Complex(const double r, const double i) : real(r), img(i) {};
	Complex(const Complex&a) : real(a.real), img(a.img) {};

	~Complex() {};


	Complex& operator=(const Complex&a);
	friend Complex operator+(const Complex&a, const Complex&b);
	friend Complex operator-(const Complex&a, const Complex&b);
	friend Complex operator*(const Complex&a, const Complex&b);
	friend Complex operator/(const Complex& a, const Complex& b);
	Complex& operator+=(const Complex a);
	Complex& operator-=(const Complex a);
	Complex& operator*=(const Complex a);
	Complex& operator/=(const Complex a);
	void operator()(const double r, const double i);
	Complex& operator++();
	Complex& operator++(int);
	Complex& operator--();
	Complex& operator--(int);
	friend std::ostream& operator<<(std::ostream&, const Complex&);
	friend std::istream& operator>>(std::istream&, Complex&);
	friend Complex operator+(const Complex a, const double r);
	friend Complex operator-(const Complex a, const double r);
	friend Complex operator*(const Complex a, const double r);
	friend Complex operator/(const Complex a, const double r);
	friend Complex operator+(const double r, const Complex a);
	friend Complex operator-(const double r, const Complex a);
	friend Complex operator*(const double r, const Complex a);
	friend Complex operator/(const double r, const Complex a);
};
