#pragma once
#include"ShapeA.h"
class Parallelogram : virtual public Shape
{
	double a;
	double b;
	double angle;
public:
	Parallelogram(const double a, const double b, const double angle) : a(a), b(b), angle(angle) {};
	double getArea() override;
	void info() override;
	virtual ~Parallelogram() {};
};
