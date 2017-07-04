#pragma once
#include"Device.h"
#include<iostream>
#include<string>
class Telephone : public Device
{
	std::string use2;
	std::string model;
public:
	Telephone() : Device("asus"), use2("Call"),model("7s") {};
	void printProcessor()
	{
		std::cout << "A9";
	}
	void use()
	{
		std::cout << "Use: " << use2 << "\nMark: " << getMark << "\nModel\n"<<model<<"\n";
	}
	~Telephone() {};
};

