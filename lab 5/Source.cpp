#include "Digit.h"
#include<iostream>
int main()
{
	Digit a;
	Digit b(4);
	std::cout << (a + b).get_digit();
	std::cout << "\n";
	std::cout << (a + 5).get_digit();
	std::cout << "\n";
	std::cout << (a > b);
	std::cout<<Digit::show();
	
	



	return 0;
}
