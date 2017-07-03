#include "Automobile.h"


Automobile::Automobile(const std::string a, const std::string b, const int c, const int d, const std::string e) : mark(a), model(b), year_of_issue(c), average_speed(d), mode_of_motion(e){}

std::string Automobile::get_mark() const
{
	return mark;
}

std::string Automobile::get_model() const
{
	return model;
}

int Automobile::get_year() const
{
	return year_of_issue;
}

int Automobile::get_speed() const
{
	return average_speed;
}

int Automobile::computeDistance(const int minutes)
{
	return (average_speed * minutes)/60;
}

void Automobile::getInfo() const
{
	std::cout << "Mark: " << mark << "\nModel: " << model << "\nYear of issue: " << year_of_issue << "\nAverage speed: " << average_speed << "\n";
}

std::string Automobile::move() const
{
	return mode_of_motion;
}
