#include "Digit.h"
#include<iostream>

int main()
{
	
	Digit a(10);
	Digit b(25);
	std::cout<<(a += b).getDigit()<<"\n";
	std::cout << (a += 100).getDigit()<<"\n";
	int h = b;
	std::cout << h << "\n";
	double y = a;
	std::cout << y << "\n";
	a(1000);
	std::cout << a.getDigit()<<"\n";


	return 0;
}
