#include "Students.h"


 void Students::printl(std::string la)
{
	std::cout << la;
}


std::string Students::getfio()const {
	return fio;
};

void Students::setfio(std::string name)
{
	fio = name;
}



std::string Students::getyears()const
{
	return years;
}
void Students::setyears(std::string n)
{
	years = n;
}




std::string Students::getphone()const
{
	return phone;
}
void Students::setphone(std::string tel)
{
	phone = tel;
}




std::string Students::getcity()const
{
	return city;
}
void Students::setcity(std::string gorod)
{
	city = gorod;
}



std::string Students::getschool()const
{
	return school;
}

void Students::setschool(std::string sh)
{
	school = sh;
}




std::string Students::getn_g()const
{
	return n_g;
}

void Students::setn_g(std::string group)
{
	n_g = group;
}
