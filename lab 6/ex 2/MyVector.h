#pragma once
#include<iostream>
class MyVector
{
	double * arr;
	size_t size;
	size_t capacity;
	static size_t counter;
	static size_t realy_counter;

public:
	MyVector() : size(0), capacity(32) { ++counter; ++realy_counter; arr = new double[capacity]; };
	MyVector(const MyVector &a) : size(a.size), capacity(a.capacity)
	{
		++counter;
		++realy_counter;
		arr = new double[capacity];
		for (int i = 0; i < size; i++)
		{
			arr[i] = a.arr[i];
		}
	}
	MyVector(MyVector &&a) : size(a.size), capacity(a.capacity), arr(a.arr)
	{
		++counter;
		++realy_counter;
		a.size = 0;
		a.capacity = 0;
		a.arr = nullptr;
	}
	MyVector(double arr1[], double size1);
	static int getCounter()
	{
		return counter;
	}
	static int getRealyCounter()
	{
		return realy_counter;
	}
	bool empty()const;
	double get_size()const;
	double get_capacity()const;
	void push_back(double a);
	double pop_back();
	double& at(const int a);
	void print()const;
	void sort()const;
	double get_min()const;
	double get_max()const; 
	MyVector& operator=(const MyVector &a);
	MyVector& operator=(MyVector&&a);
	double operator[](const int index);
	bool operator==(const MyVector&a);
	bool operator!=(const MyVector&a);
	bool operator>(const MyVector&a);
	bool operator<(const MyVector&a);
	bool operator>=(const MyVector&a);
	bool operator<=(const MyVector&a);
	void clear();
	void reserve(const int x);


	~MyVector() { --counter; delete[]arr; };
};
