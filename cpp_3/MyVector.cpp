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
	{
		arr[size + 1];
		arr[size] = a;

	}

	else
	{

		double * ptr;
		ptr = new double[capacity * 2];

		for (int i = 0; i < size; i++)
		{
			arr[i] = ptr[i];
		}

		delete[]arr;
		arr = ptr;
		arr[size + 1];
		arr[size] = a;


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

	else
		std::cout << "Error";
}



void MyVector::print() const
{
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
