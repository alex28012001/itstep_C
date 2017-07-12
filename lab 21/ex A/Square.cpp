#include"Square.h"
#include<iostream>

double Square::getArea()
{
	std::cout << "Area square: ";
	return a*a;
}

void Square::info()
{
	std::cout << "a: " << a << "\n\n";
}
