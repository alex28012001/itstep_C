#include "Digit.h"
#include<iostream>
int main()
{
	Digit a;
	Digit b(10);
	std::cout<<(a + b).get_digit();
	std::cout << "\n";
	std::cout << (a + 5).get_digit();



	return 0;
}
