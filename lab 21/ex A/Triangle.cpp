#include"Triangle.h"
double Triangle::getArea()
{

	if ((a < b + c) && (b < a + c) && (c < a + b) && a > 0 && b > 0 && c > 0)
	{
		double p = (a + b + c) / 2;
		return sqrt(p*(p - a)*(p - b)*(p - c));
	}
	else
		a = 0;
	b = 0;
	c = 0;
	angle_a = 0;
	angle_b = 0;
	angle_c = 0;
}
