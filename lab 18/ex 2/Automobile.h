#pragma once
#include "Transport.h"
#include<iostream>
#include<string>
class Automobile : public Transport
{
	std::string mark;
	std::string model;
	int	year_of_issue;
	int	average_speed; //в километрах
	std::string mode_of_motion;
public:
	Automobile(const std::string a, const std::string b, const int c, const int d,const std::string e);
	std::string get_mark() const;
	std::string get_model() const;
	int get_year() const;
	int get_speed() const;
	int computeDistance(const int minutes); //принимает минуты
	virtual void getInfo() const;
	std::string move() const;
	
	virtual ~Automobile(){};
};
