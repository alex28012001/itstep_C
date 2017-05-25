#include "Triangle.h"
#include<iostream>
int main()
{
	Triangle abc;

	
	int height, base;
	std::cout << "Input height: ";
	std::cin >> height;
	std::cout << "Input base: ";
	std::cin >> base;

	abc.setsquare_height_base(height, base);
	abc.getsquare_height_base();
	abc.answer_square_height_base();





	int side1, side2, angle;
	std::cout << "\n\nInput side1: ";
	std::cin >> side1;
	std::cout << "Input side2: ";
	std::cin >> side2;
	std::cout << "Input angle: ";
	std::cin >> angle;



	abc.setsquare_2side_angle(side1, side2, angle);
	abc.getsquare_2side_angle();
	abc.answer_square_2side_angle();
	


	int side_a, side_b, side_c;
	std::cout << "\n\nInput side_a: ";
	std::cin >> side_a;
	std::cout << "Input side_b: ";
	std::cin >> side_b;
	std::cout << "Input side_c: ";
	std::cin >> side_c;


	abc.setsquare_3side(side_a,side_b,side_c);
	abc.getsquare_3side();
	abc.answer_square_3side();

	


	return 0;
}
