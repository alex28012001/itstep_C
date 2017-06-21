#include<iostream>

#pragma once
template<typename T, typename U>
class Pair
{
	T first;
	U second;


public:
	Pair()  = default;
	Pair(const size_t x, const size_t y) : first(x), second(y) {};
	T get_first()const;
	U get_second()const;
	void make_pair(const T x, const U y);
	



	~Pair(){};
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
void Pair<T, U>::make_pair(const T x, const U y)
{
	first = x;
	second = y;
}





template<>
class Pair<bool, bool>
{
	bool first;
	bool second;


public:
	Pair() = default;
	Pair( const bool x) : first(x), second(x) {};
	bool get_first()const;
	bool get_second()const;
	void make_pair(const bool x);


	~Pair() {};
};


 bool Pair<bool, bool>::get_first()const
{
	return first;
}


bool Pair<bool, bool>::get_second()const
{
	return second;
}

void Pair<bool, bool>::make_pair(const bool x)
{
	first = x;
	second = x;
}
