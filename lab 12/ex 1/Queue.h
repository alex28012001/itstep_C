#pragma once
template <class T>
class Queue
{
	T* data;
	size_t tail;
	size_t capacity;
	// добавьте ещё поля, какие посчитаете нужными
public:
	Queue();
	Queue(const Queue<T>&);
	Queue(Queue<T>&&);
	Queue& operator=(const Queue<T>&);
	Queue& operator=(Queue<T>&&);
	~Queue();

	size_t size() const;
	bool empty() const;
	void clear();

	void push(const T&);
	void pop();
	T& back();
	T& front();
};

template<typename T>
Queue<T>::Queue() :tail(0), capacity(10){}


template<typename T>
Queue<T>::Queue(const Queue<T>&a) : tail(a.tail), capacity(a.capacity)
{
	std::cout << "Copy constructor\n";
	data = new T[capacity];
	for (size_t i = 0; i < tail; ++i)
	{
		data[i] = a.data[i];
	}
}


template<typename T>
Queue<T>::Queue(Queue<T>&&a) :tail(a.tail), capacity(a.capacity), data(a.data)
{
	std::cout << "Move constructor\n";
	tail = 0;
	capacity = 0;
	a.data = nullptr;
}


template<typename T>
Queue<T>& Queue<T>::operator=(const Queue<T>&a)
{
	std::cout << "Copy operator\n";
	tail = a.tail;
	capacity = a.capacity;

	data = new T[capacity];
	for (size_t i = 0; i < tail; ++i)
		data[i] = a.data[i];

	return *this;
}


template<typename T>
Queue<T>& Queue<T>:: operator=(Queue<T>&&a)
{
	std::cout << "Move operator\n";
	tail = a.tail;
	capacity = a.capacity;
	data = a.data;

	a.tail = 0;
	a.capacity = 0;
	a.data = nullptr;

	return *this;
}


template<typename T>
Queue<T>::~Queue()
{
	delete[] data;
}

template<typename T>
size_t Queue<T>::size() const
{
	return tail;
}

template<typename T>
bool Queue<T>::empty() const
{
	return tail == 0;
}


template<typename T>
void Queue<T>:: clear()
{
	tail = 0;
}


template<typename T>
void Queue<T>:: push(const T&x)
{
	if (tail > capacity)
		data[tail++] = x;
	else
		capacity *= 2;
	T * arr = new T[capacity];
	for (size_t i = 0; i < tail; ++i)
		arr[i] = data[i];
	delete[]data;
	data = arr;
	data[tail] = x;
	++tail;

}

template<typename T>
void Queue<T>::pop()
{
	if (tail > 0)
		--tail;
	else
		std::cout << "Queue empty";

}

template<typename T>
T& Queue<T>:: back()
{
	return data[tail - 1];
}

template<typename T>
T& Queue<T>:: front()
{
	return data[0];
}
