#include "Digit.h"
#include<iostream>

int main()
{
	
	Digit a(10);
	Digit b(25);
	std::cout << "Operator += : " << (a += b).getDigit() << "\n";
	std::cout << "Operator(int) += : " << (a += 100).getDigit() << "\n";
	std::cout << "Operator -= : " << (a -= b).getDigit() << "\n";
	std::cout << "Operator(int) -= : " << (a -= 100).getDigit() << "\n";
	std::cout << "Operator /= : " << (a /= b).getDigit() << "\n";
	std::cout << "Operator(int) /= : " << (a /= 100).getDigit() << "\n";
	std::cout << "Operator %= : " << (a %= b).getDigit() << "\n";
	std::cout << "Operator(int) %= : " << (a %= 100).getDigit() << "\n";

	int h = b;
	std::cout << h << "\n";
	double y = a;
	std::cout << y << "\n";
	a(1000);
	std::cout << a.getDigit()<<"\n";


	return 0;
}
