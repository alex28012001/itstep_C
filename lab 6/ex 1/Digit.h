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
	Digit(Digit &a) : digit(a.digit) { ++counter; };
	Digit(Digit &&a) : digit(a.digit)
	{
		a.digit = 0;
		++counter;
	};
	int getDigit()const;
	void setDigit(const int x);
	~Digit() { --counter; };
	static size_t getCounter()
	{
		return counter;
	}
	Digit operator+(const Digit x);
	Digit operator+(const int x);
	Digit operator-();
	Digit operator-(const Digit x);
	Digit operator-(const int x);
	Digit operator*(const Digit x);
	Digit operator*(const int x);
	Digit operator/(const Digit x);
	Digit operator/(const int x);
	Digit operator%(const Digit x);
	Digit operator%(const int x);
	bool operator>(const Digit &x);
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
	Digit& operator++();
	Digit operator--(int);
	Digit& operator--();
	Digit& operator=(const Digit &x);
	Digit& operator=(Digit&&x);
	Digit operator+=(const Digit a);
	Digit operator+=(const int a);
	Digit operator-=(const Digit a);
	Digit operator-=(const int a);
	Digit operator*=(const Digit a);
	Digit operator*=(const int a);
	Digit operator/=(const Digit a);
	Digit operator/=(const int a);
	Digit operator%=(const Digit a);
	Digit operator%=(const int a);
	operator int()const;
	operator double()const;
	void operator()(const int x);



};
