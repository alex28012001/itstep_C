#include"ShapeA.h"
#include<iostream>
#include<math.h>
#pragma once

class Triangle : public Shape
{
	double a;
	double b;
	double c;
	double angle_a;
	double angle_b;
	double angle_c;
public:
	Triangle(std::pair<double,double> x,const double c) : a(x.first), b(x.second), c(c) {};
	Triangle(const double angle, std::pair<double, double> x) : angle_a(angle), a(x.first), b(x.second) {}
	Triangle(std::pair<double, double> x, const double angle_a) : a(x.first), b(x.second), c(c) {};
	double getArea() override;
	
	~Triangle() {};
};
