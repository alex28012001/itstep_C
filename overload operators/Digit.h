#pragma once
class Digit
{
	int digit;


public:
	Digit():digit(1) {};
	explicit Digit(const int x) :digit(x) {};
	int get_digit()const;

	~Digit() {};

	Digit operator+(const Digit x)
	{
		Digit tmp;
		tmp.digit = digit + x.digit;
		return tmp;
	}

	Digit operator+(const int x)
	{
		Digit tmp;
		tmp.digit = digit + x;
		return tmp;
	}

	bool operator>(const Digit &x)
	{
		return digit > x.digit;
	}
};
