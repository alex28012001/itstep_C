#include"Triangle.h"
#include"Parallelogram.h"
#include"Rectangle.h"
#include"Square.h"
#include<iostream>
int main()
{
	Triangle triangle(10, 10, 10);
	std::cout << triangle.getArea() << "\n";
	triangle.info();

	std::pair<double, double> x(5, 5);
	Triangle triangle2(x, 30);
	std::cout << triangle2.getArea() << "\n";
	triangle2.info();
	std::pair<double, double> y(30, 60);
	Triangle triangle3(8, y);
	std::cout << triangle3.getArea() << "\n";
	triangle3.info();

	Parallelogram parallelogram(5, 10, 30);
	std::cout << parallelogram.getArea() << "\n";
	parallelogram.info();

	Rectangle rectangle(10, 10, 30);
	std::cout << rectangle.getArea() << "\n";
	rectangle.info();

	Square square(5);
	std::cout << square.getArea() << "\n";
	square.info();


	return 0;
}
