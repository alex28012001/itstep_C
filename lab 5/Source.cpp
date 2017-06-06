#include "Digit.h"
#include "Test.h"

#include<iostream>
int main()
{
	Digit a;
	Digit b(4);
	Digit c;
	std::cout << (a + b).getDigit();
	std::cout << "\n";
	std::cout << (a + 5).getDigit();
	std::cout << "\n";
	std::cout << (a > b) << std::endl;
	std::cout << Digit::getCounter() << std::endl;
	a = b = c ;
	
	int x = a;
	std::cout << x;
	double y = c;
	std::cout << y << std::endl;


	c(1000);
	std::cout << c.getDigit();

	
	Test::test();


	return 0;
}
