#include"Circle.h"
#include<iostream>
#define PI 3.14159265  

void Circle::set_radius(const double x)
{
	radius = x;
}
void Circle::set_x(const double a)
{
	x = a;
}
void Circle::set_y(const double b)
{
	y = b;
}

double Circle::getArea()
{
	std::cout << "Area circle: ";
	return PI * radius * radius;
}

void Circle::info()
{
	std::cout << "radius: "<<radius<<"  x: "<<x<<"  y: "<<y<<"\n\n";
}
