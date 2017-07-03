#pragma once
#include "Automobile.h"
#include<string>
class Taxi : public Automobile
{
	int rate; //в долларах
	int amount_of_money;
	static int counter;
public:
	Taxi() : rate(2), amount_of_money(0), Automobile("bmw", "x5", 2015, 100,"ground") { ++counter; };
	int get_amount() const;
	int payment(const int S);
	int get_sumMoney() const;
	static int get_counter()
	{
		return counter;
	}
	void getInfo() const override;

	
	~Taxi(){};
};

