#include "Triangle.h"
#include<iostream>
#include<cmath>
#define PI 3.14159265 


int Triangle::getsquare_height_base()const
{
	return height,base;
}

void Triangle::setsquare_height_base(int height, int base)
{
	square = (height / 2)*base;

}

int Triangle::answer_square_height_base()const
{
	std::cout << "Answer: "<<square;
	return square;
}





int Triangle::getsquare_2side_angle()const
{
	return side1, side2, angle;
}

void Triangle::setsquare_2side_angle(int a, int b, int angle)
{
	angle = 3, 14 / 180;
	square2 = 0, 5 * a * b * sin(angle);
}

int Triangle::answer_square_2side_angle()const
{
	std::cout << "Answer: " << square2;
	return square2;
}




int Triangle::getsquare_3side()const
{
	return side_a,side_b,side_c;
}

void Triangle::setsquare_3side(int a, int b, int c)
{
	int p;
	p = (a + b + c) / 2;
	square3 = sqrt(p*(p - a)*(p - b)*(p - c));
}

int Triangle::answer_square_3side()const
{
	std::cout << "Answer: " << square3;
	return square3;
}
