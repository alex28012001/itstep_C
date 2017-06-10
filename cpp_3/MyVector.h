#pragma once
#include<iostream>
class MyVector
{
	double * arr;
	size_t size;
	size_t capacity;

public:
	MyVector() : size(0), capacity(32) { arr = new double[capacity]; };
	MyVector(double arr1[], int size1) :size(size1)
	{
		
		int counter = size1 / 32;

		arr = new double[(counter + 1) * 32];
		capacity = 32 * (counter + 1);

		for (unsigned int i = 0; i < size; ++i)
			arr[i] = arr1[i];

	}


	MyVector(MyVector &a)
	{
		this->size = a.size;
		this->capacity = a.capacity;
		arr = new double[capacity];
		for (int i = 0; i < size; i++)
		{
			arr[i] = a.arr[i];
		}

	};

	bool empty()const;
	double get_size()const;
	double get_capacity()const;
	void push_back(double a);
	double pop_back();
	double& at(const int a);
	void print()const;







	~MyVector() { delete[]arr; };
};
