#pragma once
#include<iostream>
#include<string>

class Students
{
	std::string fio = "";
	std::string years = "";
	std::string phone = "";
	std::string city = "";
	std::string school = "";
	std::string n_g = "";



public:
	Students() {};

	void printl(std::string la);

	std::string getfio()const;
	void setfio(std::string name);

	std::string getyears()const;
	void setyears(std::string n);

	std::string getphone()const;
	void setphone(std::string tel);

	std::string getcity()const;
	void setcity(std::string gorod);

	std::string getschool()const;
	void setschool(std::string sh);

	std::string getn_g()const;
	void setn_g(std::string group);


	
	~Students() {};


};
