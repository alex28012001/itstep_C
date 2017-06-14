#include<iostream>

#pragma once
template<typename T, typename U>
class Pair
{
	T first;
	U second;


public:
	Pair() :first(0), second(0) {};
	Pair(const size_t x, const size_t y) : first(x), second(y) {};
	T get_first()const;
	U get_second()const;
	void set_first(const size_t x);
	void set_second(const size_t x);



	~Pair() {};
};

template<typename T, typename U>
T Pair<T, U>::get_first()const
{
	return first;
}

template<typename T, typename U>
U Pair<T, U>::get_second()const
{
	return second;
}

template<typename T, typename U>
void Pair<T, U>::set_first(const size_t x)
{
	first = x;
}

template<typename T, typename U>
void Pair<T, U>::set_second(const size_t x)
{
	second = x;
}









template<>
class Pair<bool, bool>
{
	bool first;
	bool second;


public:
	Pair() :first(false), second(false) {};
	Pair( const bool x,  const bool y) : first(x), second(y) {};
	bool get_first()const;
	bool get_second()const;
	void set_first(const bool x);
	void set_second(const bool x);



	~Pair() {};
};

template<bool, bool>
 bool Pair<bool, bool>::get_first()const
{
	return first;
}

 template<bool, bool>
bool Pair<bool, bool>::get_second()const
{
	return second;
}

template<bool, bool>
void Pair<bool, bool>::set_first(const bool x)
{
	first = x;
}

template<bool, bool>
void Pair<bool, bool>::set_second(const bool x)
{
	second = x;
}
