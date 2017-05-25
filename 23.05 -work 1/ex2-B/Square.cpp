#include "Square.h"
#include<iostream>

int Square::getsquare_1side()const
{
	return a;
}

void Square::setsquare_1side(int side1)
{
	a = side1 ;
	square = a*a;
}


int Square::answer_1side()const
{
	std::cout << "Answer: "<<square;
	return square;
}






int Square::getsquare_2side()const
{
	return b;
}

void Square::setsquare_2side(int side2)
{
    b = side2;
	square2 = a*b;
}


int Square::answer_2side()const
{
	std::cout << "Answer: " << square2;
	return square2;
}
