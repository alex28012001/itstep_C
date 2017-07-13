#include"Triangle.h"
#include<iostream>
#include<cmath>
#define PI 3.14159265  

Triangle::Triangle(const double a, const double b, const double c) : a(a), b(b), c(c)
{
	if (a < b + c && b < a + c && c < a + b && a>0 && b>0 && c>0)
	{
		angle_a = acos(((b*b) + (c*c) - (a*a)) / (2 * b*c));
		angle_a = angle_a * 180 / PI;

		angle_b = acos(((a*a) + (c*c) - (b*b)) / (2 * a*c));
		angle_b = angle_b * 180 / PI;

		angle_c = 180 - (angle_a + angle_b);
	}

	else
	{
		angle_a = 0;
		angle_b = 0;
		angle_c = 0;
	}

}


Triangle::Triangle(std::pair<double, double> x, const double angle) : a(x.first), b(x.second), angle_c(angle)
{
	c = sqrt((a*a) + (b*b) - (2 * a*b*cos(angle_c * PI / 180)));

	angle_a = acos(((b*b) + (c*c) - (a*a)) / (2 * b*c));
	angle_a = angle_a * 180 / PI;

	angle_b = 180 - (angle_a + angle_c);
}



Triangle::Triangle(const double a, std::pair<double, double> x) : a(a), angle_b(x.first), angle_c(x.second)
{
	angle_a = 180 - (angle_b + angle_c);
	b = a*(sin(angle_b*PI / 180) / (sin(angle_a*PI / 180)));
	c = a*(sin(angle_c*PI / 180) / (sin(angle_a*PI / 180)));
}


void Triangle::set_a(const double x)
{
	a = x;
}
void Triangle::set_b(const double x)
{
	b = x;
}
void Triangle::set_c(const double x)
{
	c = x;
}
void Triangle::set_angle_a(const double x)
{
	angle_a = x;
}
void Triangle::set_angle_b(const double x)
{
	angle_b = x;
}
void Triangle::set_angle_c(const double x)
{
	angle_c = x;
}


double Triangle::getArea()
{

	if ((a < b + c) && (b < a + c) && (c < a + b) && a > 0 && b > 0 && c > 0)
	{
		std::cout << "Area triangle : ";
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

void Triangle::info()
{
	std::cout << "a: " << a << "  b: " << b << "  c: " << c << "  angle_a: " << angle_a << "  angle_b: " << angle_b << "  angle_a: " << angle_c << "\n\n";
}
