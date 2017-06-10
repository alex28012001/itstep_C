#include "MyVector.h"
#include<iostream>

int main()
{
	double arr1[11];
	for (int i = 0; i < 11; ++i)
	{
		arr1[i] = rand() % 11;
	}
	MyVector a(arr1, 11);
	std::cout << "Array: ";
	a.print();
	std::cout<<"Empty: "<<a.empty()<<"\n";
	std::cout<<"Size: "<<a.get_size()<<"\n";
	std::cout <<"Capacity: "<< a.get_capacity() << "\n";
	std::cout << "Push back : ";
	a.push_back(1);
	a.print();
	std::cout << "Pop back : ";
	a.pop_back();
	a.print();
	std::cout << "Index(7): ";
	std::cout << a.at(7) << "\n";
	





	return 0;
}
