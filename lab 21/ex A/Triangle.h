#include"ShapeA.h"
#include<iostream>
#pragma once

class Triangle : virtual public Shape
{
	double a;
	double b;
	double c;
	double angle_a;
	double angle_b;
	double angle_c;
	double S;
public:
	Triangle(const double a, const double b, const double c);
	Triangle(std::pair<double, double> x, const double angle);
	Triangle(const double angle, std::pair<double, double> x);
	void set_a(const double x);
	void set_b(const double x);
	void set_c(const double x);
	void set_angle_a(const double x);
	void set_angle_b(const double x);
	void set_angle_c(const double x);
	double getArea() override;
	void info() override;


	~Triangle() {};
};
