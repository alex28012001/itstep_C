#pragma once
#include<iostream>
class Digit
{
	int digit;
	static size_t counter;


public:

	Digit() :digit(1) { ++counter; };
	explicit Digit(const int x) :digit(x) { ++counter; };
	explicit Digit(double x) :digit((int)x) { ++counter; };
	Digit(Digit &a) : digit(a.digit){ ++counter; };
	Digit(Digit &&a) : digit(a.digit)
	{
		a.digit = 0;
		++counter;
	};
	int get_digit()const;
	void set_digit(const int x);
	~Digit() { --counter; };
	


	static size_t show()
	{
		return counter;
	}
	Digit operator+(const Digit x);
	Digit operator+(const int x);
	Digit operator-(const Digit x);
	Digit operator-(const int x);
	Digit operator*(const Digit x);
	Digit operator*(const int x);
	Digit operator/(const Digit x);
	Digit operator/(const int x);
	Digit operator%(const Digit x);
	Digit operator%(const int x);
	bool operator>( const Digit &x);
	bool operator>(const int x);
	bool operator<(const Digit &x);
	bool operator<(const int x);
	bool operator==(const Digit &x);
	bool operator==(const int x);
	bool operator!=(const Digit &x);
	bool operator!=(const int x);
	bool operator>=(const Digit &x);
	bool operator>=(const int x);
	bool operator<=(const Digit &x);
	bool operator<=(const int x);
	Digit operator++(int);
	Digit operator++();
	Digit operator--(int);
	Digit operator--();
	Digit& operator=(const Digit &x);
	Digit operator=( Digit&&x);
		
	


};

