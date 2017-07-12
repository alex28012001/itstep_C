#pragma once
#include"ShapeA.h"
#include<iostream>
class Circle: public Shape
{
	double radius;
	double x;
	double y;

public:
	Circle(const double r,const double x,const double y) : radius(r),x(x),y(y) {};
	double getArea();
	void info();
	~Circle() {};
};
