#include "MyVector.h"
#include<iostream>

int main()
{

	double arr1[] = { 1, 2, 3, 4 };
	MyVector<double> a(arr1, 4);
	a.print();
	std::cout << "\n";
	a.insert(100, 1);
	a.print();
	std::cout<<a.get_size()<<"\n";
	a.resize(1000);
	std::cout << a.get_size() << "\n";
	


	return 0;
}
