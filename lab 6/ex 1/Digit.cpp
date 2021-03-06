#include "Digit.h"
size_t Digit::counter = 0;


int Digit::getDigit()const
{
	return digit;
}

void Digit::setDigit(const int x)
{
	digit = x;
}

Digit Digit:: operator+(const Digit x)
{
	Digit tmp;
	tmp.digit = digit + x.digit;
	return tmp;
}

Digit Digit::operator+(const int x)
{
	Digit tmp;
	tmp.digit = digit + x;
	return tmp;
}

Digit Digit::operator-()
{
	Digit tmp;
	tmp.digit = -digit;
	return tmp;
}

Digit Digit::operator-(const Digit x)
{
	Digit tmp;
	tmp.digit = digit - x.digit;
	return tmp;
}

Digit Digit::operator-(const int x)
{
	Digit tmp;
	tmp.digit = digit - x;
	return tmp;
}

Digit Digit::operator*(const Digit x)
{
	Digit tmp;
	tmp.digit = digit * x.digit;
	return tmp;

}

Digit Digit::operator*(const int x)
{
	Digit tmp;
	tmp.digit = digit * x;
	return tmp;
}

Digit Digit::operator/(const Digit x)
{
	Digit tmp;
	tmp.digit = digit / x.digit;
	return tmp;

}

Digit Digit::operator/(const int x)
{
	Digit tmp;
	tmp.digit = digit / x;
	return tmp;
}


Digit Digit::operator%(const Digit x)
{
	Digit tmp;
	tmp.digit = digit % x.digit;
	return tmp;

}

Digit Digit::operator%(const int x)
{
	Digit tmp;
	tmp.digit = digit % x;
	return tmp;
}

bool Digit::operator>(const Digit &x)
{
	return digit > x.digit;
}

bool Digit::operator>(const int x)
{
	return digit > x;
}

bool Digit::operator<(const Digit &x)
{
	return digit < x.digit;
}

bool Digit::operator<(const int x)
{
	return digit < x;
}

bool Digit::operator==(const Digit &x)
{
	return digit == x.digit;
}

bool Digit::operator==(const int x)
{
	return digit == x;
}

bool Digit::operator!=(const Digit &x)
{
	return digit != x.digit;
}

bool Digit::operator!=(const int x)
{
	return digit != x;
}

bool Digit::operator>=(const Digit &x)
{
	return digit >= x.digit;
}

bool Digit::operator>=(const int x)
{
	return digit >= x;
}

bool Digit::operator<=(const Digit &x)
{
	return digit <= x.digit;
}

bool Digit::operator<=(const int x)
{
	return digit <= x;
}

Digit Digit::operator++(int)
{
	Digit tmp = *this;
	++digit;
	return tmp;

}

Digit& Digit::operator++()
{
	++digit;
	return *this;
}

Digit Digit::operator--(int)
{
	Digit tmp = *this;
	--digit;
	return tmp;
}

Digit& Digit::operator--()
{
	--digit;
	return *this;
}

Digit& Digit::operator=(const Digit& x)
{
	if (this == &x)
	{
		return *this;
	}

	digit = x.digit;
	return *this;
}

Digit& Digit::operator=(Digit&&x)
{
	if (this == &x)
	{
		return *this;
	}

	digit = x.digit;
	x.digit = 0;
	return *this;

}

Digit Digit::operator+=(const Digit a)
{
	digit += a.digit;
	return *this;
}

Digit Digit::operator+=(const int a)
{
	digit += a;
	return *this;
}

Digit Digit::operator-=(const Digit a)
{
	digit -= a.digit;
	return *this;
}

Digit Digit::operator-=(const int a)
{
	digit -= a;
	return *this;
}

Digit Digit::operator*=(const Digit a)
{
	digit *= a.digit;
	return *this;
}

Digit Digit::operator*=(const int a)
{
	digit *= a;
	return *this;
}

Digit Digit::operator/=(const Digit a)
{
	digit /= a.digit;
	return *this;
}

Digit Digit::operator/=(const int a)
{
	digit /= a;
	return *this;
}

Digit Digit::operator%=(const Digit a)
{
	digit %= a.digit;
	return *this;
}

Digit Digit::operator%=(const int a)
{
	digit %= a;
	return *this;
}

Digit :: operator int()const
{
	return digit;
}

Digit :: operator double()const
{
	return digit;
}

void Digit :: operator()(const int x)
{
	digit = x;

}













