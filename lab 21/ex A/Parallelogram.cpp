#include"Parallelogram.h"
#include<iostream>
#include<cmath>
#define PI 3.14159265  

void Parallelogram::set_a(const double x)
{
	a = x;

}
void Parallelogram::set_b(const double x)
{
	b = x;
}

void Parallelogram::set_angle(const double x)
{
	angle = x;
}

double Parallelogram::getArea()
{
	std::cout << "Area parallelogramm : ";
	return a*b*sin(angle*PI / 180);
}

void Parallelogram::info()
{
	std::cout << "a: " << a << "  b: " << b << "  angle: " << angle << "\n\n";
}
