#pragma once

template<typename T>
class Stack
{
	T * ptr;
	T maxsize;
	T size;
	T top;

public:
	Stack() : size(0), top(0), maxsize(32)
	{
		ptr = new T[maxsize];
	};

	Stack(const Stack&a) : size(a.size), top(a.top), maxsize(a.maxsize)
	{
		std::cout << "Copy constructor\n";
		ptr = new T[maxsize];
		for (size_t i = 0; i < size; ++i)
		{
			ptr[i] = a.ptr[i];
		}
	}

	Stack(Stack &&a) : size(a.size), top(a.top), maxsize(a.maxsize)
	{
		std::cout << "Move constructor\n";

		ptr = a.ptr;
		a.maxsize = 0;
		a.size = 0;
		a.top = 0;
		a.ptr = nullptr;
	}

	bool empty() const
	{
		if (size > 0)
		return true;
		else
			return false;
	}

	int get_size() const
	{
		return size;
	}

	void push(const T &value)
	{
		if (top < maxsize)
		{
			ptr[size] = value;
			++size;

		}
		else
		{
			T *arr = new T[maxsize * 2];
			maxsize *= 2;

			for (size_t i = 0; i < size; ++i)
				arr[i] = ptr[i];

			delete[]ptr;
			ptr = arr;
			ptr[size] = value;
			++size;
		}




	}

	void pop()
	{
		if (size > 0)
		{
			ptr[--top];
			--size;
		}
	}

	int get_top()
	{
		return ptr[size - 1];	
	}

	Stack& operator=(const Stack& a)
	{
		std::cout << "Copy operator\n";
		if (this == &a)
		{
			return *this;
		}

		size = a.size;
		top = a.top;
		maxsize = a.maxsize;
		delete[] ptr;
		ptr = new T[a.maxsize];
		for (size_t i = 0; i < size; ++i)
		{
			ptr[i] = a.ptr[i];
		}

		return *this;
	}

	Stack& operator=(Stack&& a)
	{
		std::cout << "Move operator\n";
		if (this == &a)
		{
			return *this;
		}
		delete[] ptr;
		size = a.size;
		top = a.top;
		maxsize = a.maxsize;
		ptr = a.ptr;

		a.size = 0;
		a.top = 0;
		a.maxsize = 0;
		a.ptr = nullptr;
		return *this;
	}

	bool operator==(const Stack& a)
	{
		if (size != a.size)
			return false;

		for (unsigned int i = 0; i < size; ++i)
		{
			if (ptr[i] != a.ptr[i])
				return false;
		}
		return true;
	}

	bool operator!=(const Stack&a)
	{
		if (operator==(a))
			return false;
		return true;
	}

	~Stack() { delete[] ptr; };
};
