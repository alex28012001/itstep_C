#include "MyVector.h"
#include<iostream>

int main()
{

	double arr1[] = { 1, 2, 3, 5 };
	double arr2[] = { 1, 2, 3, 5 };
	MyVector a(arr1, 4);
	MyVector b(arr2, 4);
	std::cout << "Index : " << a[3] << "\n";
	std::cout <<"Operator == : "<< (a == b) << "\n";
	std::cout <<"Operator != : "<< (a != b) << "\n";
	std::cout <<"Operator > : " << (a > b) << "\n";
	std::cout <<"Operator < : " << (a < b) << "\n";
	std::cout <<"Operator >= : " << (a >= b) << "\n";
	std::cout <<"Operator <= : " << (a <= b) << "\n";
	std::cout << "a size = " << a.get_size() << std::endl;
	a.clear();
	std::cout << "a size(clear) = " << a.get_size() << std::endl;
	std::cout << "a capacity = " << a.get_capacity() << std::endl;
	a.reserve(64);
	std::cout << "a capacity(reserve) = " << a.get_capacity() << std::endl;
	MyVector c = a;
	a = b;
	b = std::move(a);
	
	
	return 0;
}





