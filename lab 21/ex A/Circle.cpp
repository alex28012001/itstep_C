#include"Circle.h"
#include<iostream>
#define PI 3.14159265  

double Circle::getArea()
{
	std::cout << "Area circle: ";
	return PI * radius * radius;
}

void Circle::info()
{
	std::cout << "r";
}
