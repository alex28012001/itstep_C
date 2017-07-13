#include"Square.h"
#include<iostream>

void Square:: set_a(const double x)
{
	a = x;
}

double Square::getArea()
{
	std::cout << "Area square: ";
	return a*a;
}

void Square::info()
{
	std::cout << "a: " << a << "\n\n";
}
