#pragma once
#include"ShapeA.h"
class Parallelogram : virtual public Shape
{
	double a;
	double b;
	double angle;
public:
	Parallelogram(const double a, const double b, const double angle) : a(a), b(b), angle(angle) {};
	void set_a(const double x);
	void set_b(const double x);
	void set_angle(const double x);
	double getArea() override;
	void info() override;
	virtual ~Parallelogram() {};
};
