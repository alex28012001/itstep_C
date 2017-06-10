#include "MyVector.h"
#include<iostream>

int main()
{
	
	double arr[10];
	for (int i = 0; i < 10 ; i++)
	{
		arr[i] = rand() % 11;
	}
	MyVector a(arr, 10);
	MyVector b;
	a.print();
	a.sort();
	a.print();
	std::cout<<a.get_min()<<"\n";
	std::cout << a.get_max()<<"\n";
	std::cout<<MyVector::getCounter()<<"\n";
	std::cout << MyVector::getRealyCounter();
	


	
	

	return 0;
}
