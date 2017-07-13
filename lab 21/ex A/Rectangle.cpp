#include"Rectangle.h"
#include<iostream>
#include<cmath>
#define PI 3.14159265  

void Rectangle::set_d1(const double x)
{
	d1 = x;
}
void Rectangle::set_d2(const double x)
{
	d2 = x;
}
void Rectangle::set_angle(const double x)
{
	angle = x;
}

double Rectangle::getArea()
{
	std::cout << "Area rectangle: ";
	return d1*d2*sin(angle*PI / 180);
}

void Rectangle::info()
{
	std::cout << "d1: " << d1 << "  d2: " << d2 << "  angle: " << angle << "\n\n";
}
