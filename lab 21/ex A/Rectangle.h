#pragma once
#include "Parallelogram.h"
class Rectangle : public Parallelogram
{
	double d1;
	double d2;
	double angle;
public:
	Rectangle(const double d1, const double d2, const double angle) : Parallelogram(10, 5, 30), d1(d1), d2(d2), angle(angle) {};
	void set_d1(const double x);
	void set_d2(const double x);
	void set_angle(const double x);
	double getArea();
	void info();
	~Rectangle() {};
};
