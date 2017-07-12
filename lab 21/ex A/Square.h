#pragma once
#include"Rectangle.h"
class Square : public Rectangle
{
	double a;
	
public:
	Square(const double a) : Rectangle(5,10,30),a(a) {};
	double getArea();
	void info();
	~Square() {};
};
