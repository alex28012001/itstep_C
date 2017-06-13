#include "MyVector.h"
#include<iostream>

size_t MyVector::counter = 0;
size_t MyVector::realy_counter = 0;



MyVector::MyVector(double arr1[], double size1) : size(size1)
{
	++counter;
int counter = size1 / 32;

arr = new double[(counter + 1) * 32];
capacity = 32 * (counter + 1);

for (unsigned int i = 0; i < size; ++i)
	arr[i] = arr1[i];
}

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

void MyVector::sort()const
{
	for (int i = size - 1; i >= 1; i--)
	for (int j = 0; j < i; j++)
	{
		if (arr[j] >arr[j + 1])
		{
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}

}

double MyVector::get_min()const
{

	if (!size)
	{
		std::cout << "array is empty!";
	}
	double min = arr[0];

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < min)
			min = arr[i];
	}

	return min;
}

double MyVector::get_max()const
{

	if (!size)
	{
		std::cout << "array is empty!";
	}
	double max = arr[0];

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

MyVector& MyVector::operator=(const MyVector&a)
{
	if (this == &a)
	{
		return *this;
	}
	std::cout << "Copy ctor"<<"\n";
	size = a.size;
	capacity = a.capacity;
	arr = new double[size];
	for (size_t i = 0; i < size; ++i)
	{
		arr[i] = a.arr[i];
	}

	return *this;
}

MyVector& MyVector:: operator=(MyVector&&a)
{
	if (this == &a)
	{
		return *this;
	}
	std::cout << "Move ctor"<<"\n";
	size = a.size;
	capacity = a.capacity;


	a.size = 0;
	a.capacity = 0;
	arr = nullptr;
}


double MyVector:: operator[](const int index)
{
	if (index <size && index != 0)
		return arr[index];

}

bool MyVector:: operator==(const MyVector& a)
{
	bool flag;
	if (size == a.size)
		flag = 1;
	for (size_t i = 0; i < size;++i)
	if (arr[i] != a.arr[i])
		flag = 0;

	return flag;
}

bool MyVector:: operator!=(const MyVector& a)
{
	if (!(*this == a))
		return true;
	else
		return false;
}

bool MyVector:: operator>(const MyVector& a)
{
	if (size > a.size)
		return true;
	else
		return false;
}


bool MyVector:: operator<(const MyVector& a)
{
	if (size < a.size)
		return true;
	else
		return false;
}

bool MyVector:: operator>=(const MyVector& a)
{
	if (size >= a.size)
		return true;
	else
		return false;
}

bool MyVector:: operator<=(const MyVector& a)
{
	if (size <= a.size)
		return true;
	else
		return false;
}
void MyVector::clear()
{
	size = 0;
}

void MyVector::reserve(const int x)
{
	if (x < capacity) return;
	capacity = x;
	double* arr1 = new double[x];

	for (int i = 0; i < size; ++i)
		arr1[i] = arr[i];
	delete[] arr;
	arr = arr1;
	arr1 = nullptr;
}
