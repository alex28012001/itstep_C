#include "MyVector.h"
#include<iostream>

int main()
{
	MyVector abc;
	MyVector abcd = abc;
	std::cout << abc.empty() << std::endl;
	std::cout << abc.get_size() << std::endl;
	std::cout << abc.get_capacity() << std::endl;
	abc.push_back(56);
	std::cout << abc.pop_back() << std::endl;
	abc.at(3);
	abc.print();




	return 0;
}
