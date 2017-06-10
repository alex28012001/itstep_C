#pragma once
#include<iostream>
class MyVector
{
	double * arr;
	size_t size;
	size_t capacity;

public:
	MyVector() : size(0), capacity(32) { arr = new double[capacity]; };
	MyVector(const MyVector &a);
	bool empty()const;
	double get_size()const;
	double get_capacity()const;
	void push_back(double a);
	double pop_back();
	double& at(const int a);
	void print()const;







	~MyVector() { delete[]arr; };
};
