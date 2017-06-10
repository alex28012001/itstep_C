#include "MyVector.h"
#include<iostream>


bool MyVector::empty()const
{
	bool flag;
	if (size <= capacity)
		flag = true;
	else
		flag = false;

	return flag;
}


double MyVector::get_size()const
{
	return size;
}



double MyVector::get_capacity()const
{
	return capacity;
}




void MyVector::push_back(double a)
{
	if (size < capacity) 
		arr[size++] = a;

	else
	{
		double *arr1 = new double[capacity * 2];
		capacity *= 2;
		for (unsigned int i = 0; i < size; i++)
			arr1[i] = arr[i];
		delete[]arr;
		arr = arr1;
		arr[size] = a;
		size = size + 1;
	}

	std::cout << arr[size];
}




double MyVector::pop_back()
{
	if (!size)std::cout << "Vector is empty!!!";
	else --size;
	return arr[size];
}



double& MyVector::at(const int a)
{
	if (a < size)
	{
		return arr[a];
	}

	
}



void MyVector::print() const
{
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
