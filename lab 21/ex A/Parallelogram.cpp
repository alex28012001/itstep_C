#include"Parallelogram.h"
#include<iostream>
#include<cmath>
#define PI 3.14159265  

double Parallelogram::getArea()
{
	std::cout << "Area parallelogramm : ";
	return a*b*sin(angle*PI / 180);
}

void Parallelogram::info()
{
	std::cout << "a: " << a << "  b: " << b << "  angle: " << angle << "\n\n";
}
