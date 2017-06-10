#include "Square.h"
#include<iostream>
int main()
{
	Square abcd;
	int a, b;



	std::cout << "Input a: ";
	std::cin >> a;
	abcd.setsquare_1side(a);
	abcd.getsquare_1side();
	abcd.answer_1side();

	std::cout << "\n\nInput b: ";
	std::cin >> b;
	abcd.setsquare_2side(b);
	abcd.getsquare_2side();
	abcd.answer_2side();




	return 0;
}
