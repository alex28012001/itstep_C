#include "Taxi.h"

int Taxi::counter = 0;

int Taxi::get_amount() const
{
	return amount_of_money;
}

int Taxi::get_sumMoney() const
{
	return amount_of_money;
}

int Taxi::payment(const int time)
{
	amount_of_money += (rate * computeDistance(time));
	return rate * computeDistance(time);
}

void Taxi::getInfo() const 
{
	std::cout << "Mark: " << get_mark() << "\nModel: " << get_model() << "\nYear of issue: " << get_year() << "\nAverage speed: " << get_speed() << "\nRate: "<<rate<<"$\n";
}
