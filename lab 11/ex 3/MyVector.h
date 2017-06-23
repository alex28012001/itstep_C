#pragma once
#include<iostream>
template<typename T>
class MyVector
{
	T * arr;
	size_t size;
	size_t capacity;
	static size_t counter;
	static size_t realy_counter;

public:
	MyVector() : size(0), capacity(32) { ++counter; ++realy_counter; arr = new T[capacity]; };
	MyVector(const MyVector &a) : size(a.size), capacity(a.capacity)
	{
		++counter;
		++realy_counter;
		arr = new T[capacity];
		for (size_t i = 0; i < size; i++)
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
	MyVector(T arr1[], double size1);
	static int getCounter()
	{
		return counter;
	}
	static int getRealyCounter()
	{
		return realy_counter;
	}
	bool empty()const;
	T get_size()const;
	T get_capacity()const;
	void push_back(double a);
	T pop_back();
	T& at(const int a);
	void print()const;
	void sort()const;
	size_t get_min()const;
	size_t get_max()const;
	MyVector& operator=(const MyVector &a);
	MyVector& operator=(MyVector&&a);
	T operator[](const int index);
	bool operator==(const MyVector&a);
	bool operator!=(const MyVector&a);
	bool operator>(const MyVector&a);
	bool operator<(const MyVector&a);
	bool operator>=(const MyVector&a);
	bool operator<=(const MyVector&a);
	void clear();
	void reserve(const int x);
	void insert(const T x,const int index);
	void resize(const size_t x);


	~MyVector() { --counter; delete[]arr; };
};


template<typename T>
size_t MyVector<T>::counter = 0;
template<typename T>
size_t MyVector<T>::realy_counter = 0;


template<typename T>
MyVector<T>::MyVector(T arr1[], double size1) : size(size1)
{
	++counter;
	int counter = size1 / 32;

	arr = new T[(counter + 1) * 32];
	capacity = 32 * (counter + 1);

	for (unsigned int i = 0; i < size; ++i)
		arr[i] = arr1[i];
}

template<typename T>
bool MyVector<T>::empty()const
{
	bool flag;
	if (size <= capacity)
		flag = true;
	else
		flag = false;

	return flag;
}

template<typename T>
T MyVector<T>::get_size()const
{
	return size;
}


template<typename T>
T MyVector<T>::get_capacity()const
{
	return capacity;
}



template<typename T>
void MyVector<T>::push_back(double a)
{
	if (size < capacity)
		arr[size++] = a;

	else
	{
		T *arr1 = new T[capacity * 2];
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



template<typename T>
T MyVector<T>::pop_back()
{
	if (!size)std::cout << "Vector is empty!!!";
	else --size;
	return arr[size];
}


template<typename T>
T& MyVector<T>::at(const int a)
{
	if (a < size)
	{
		return arr[a];
	}


}


template<typename T>
void MyVector<T>::print() const
{
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

template<typename T>
void MyVector<T>::sort()const
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

template<typename T>
size_t MyVector<T>::get_min()const
{

	if (!size)
	{
		std::cout << "array is empty!";
	}
	T min = arr[0];

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < min)
			min = arr[i];
	}

	return min;
}

template<typename T>
size_t MyVector<T>::get_max()const
{

	if (!size)
	{
		std::cout << "array is empty!";
	}
	T max = arr[0];

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

template<typename T>
MyVector<T>& MyVector<T>::operator=(const MyVector&a)
{
	if (this == &a)
	{
		return *this;
	}
	std::cout << "Copy ctor" << "\n";
	size = a.size;
	capacity = a.capacity;
	delete[] arr;
	arr = new T[a.capacity];
	for (size_t i = 0; i < size; ++i)
	{
		arr[i] = a.arr[i];
	}

	return *this;
}

template<typename T>
MyVector<T>& MyVector<T>:: operator=(MyVector&&a)
{
	if (this == &a)
	{
		return *this;
	}
	std::cout << "Move ctor" << "\n";
	size = a.size;
	capacity = a.capacity;
	delete[] arr;
	arr = new T[capacity];
	for (size_t i = 0; i < size; ++i)
		arr[i] = a.arr[i];
	a.size = 0;
	a.capacity = 0;
	a.arr = nullptr;


	return *this;

}

template<typename T>
T MyVector<T>:: operator[](const int index)
{
	if (index <size && index != 0)
		return arr[index];

}

template<typename T>
bool MyVector<T>:: operator==(const MyVector& a)
{
	bool flag;
	if (size == a.size)
		flag = 1;
	for (size_t i = 0; i < size; ++i)
	if (arr[i] != a.arr[i])
		flag = 0;

	return flag;
}

template<typename T>
bool MyVector<T>:: operator!=(const MyVector& a)
{
	if (operator==(a) == true)
		return false;
	return true;
}

template<typename T>
bool MyVector<T>:: operator>(const MyVector& a)
{
	for (unsigned int i = 0; i < size; ++i)
	{
		if (arr[i] > a.arr[i])
			return true;
		else if (arr[i] < a.arr[i])
			return false;
	}
	return false;
}

template<typename T>
bool MyVector<T>:: operator<(const MyVector& a)
{
	for (unsigned int i = 0; i < size; ++i)
	{
		if (arr[i] < a.arr[i])
			return true;
		else if (arr[i] > a.arr[i])
			return false;
	}
	return false;
}

template<typename T>
bool MyVector<T>:: operator>=(const MyVector& a)
{
	if (arr[0] >= a.arr[0])
		return true;
	else
		return false;

}

template<typename T>
bool MyVector<T>:: operator<=(const MyVector& a)
{
	if (arr[0] <= a.arr[0])
		return true;
	else
		return false;
}

template<typename T>
void MyVector<T>::clear()
{
	size = 0;
}

template<typename T>
void MyVector<T>::reserve(const int x)
{
	if (x < capacity) return;
	capacity = x;
	T* arr1 = new T[x];

	for (int i = 0; i < size; ++i)
		arr1[i] = arr[i];
	delete[] arr;
	arr = arr1;
	arr1 = nullptr;
}

template<typename T>
void MyVector<T>::insert(const T x,const int index)
{	

	if (index > size)
	{
		std::cout << "Error";
	}

	if (index == size || index ==(size-1))
		push_back(x);

	else
	{
		//Работает неправильно , но что - то работает
		T *arr1 = new T[capacity];
		for (size_t i = 0; i < size; ++i)
			arr1[i] = arr[i];
		arr1[index + 1] = x;
		arr = arr1;
		arr[size] = size;
		++size;
		
	}

	std::cout << arr[size];

}


template<typename T>
void MyVector<T>::resize(const size_t x)
{

	if (x < size)
	{
		std::cout << "Error";
	}

	T *arr1 = new T[x];
	size = x;
	for (size_t i = 0; i < size; ++i)
		arr1[i] = arr[i];

	delete[]arr;
	arr = arr1;
}

