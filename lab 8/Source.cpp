#include "Complex.h"
#include<iostream>

int main()
{
	Complex c1(5, 3);
	Complex c2(4,4);
	std::cout <<" c1 :  "<< c1<<"\n";
	std::cout <<" c2 :  "<< c2<<"\n\n";
	std::cout << " +  :  " << (c1 + c2) << "\n";
	std::cout << " -  :  " << (c1 - c2) << "\n";
	std::cout << " *  :  " << (c1 * c2) << "\n";
	std::cout << " /  :  " << (c1 / c2) << "\n";
	std::cout << "+=  :  " << (c1 += c2) << "\n";
	std::cout << "-=  :  " << (c1 -= c2) << "\n";
	std::cout << "*=  :  " << (c1 *= c2) << "\n";
	std::cout << "/=  :  " << (c1 /= c2) << "\n";
	std::cout << "++  :  " << (++c1) << "\n";
	std::cout << "--  :  " << (++c1) << "\n";
	c1(100, 100);
	std::cout << "()  :  " << c1<<"\n";
;
	return 0;
}
