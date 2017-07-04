#pragma once
#include"Device.h"
#include<iostream>
#include<string>
class Computer : virtual public Device
{
	std::string use2;
	std::string Processor;
public:
	Computer() : Device("asus"), use2("Play computers games"),Processor("Intel5 8734") {};
	void printFavoriteGame()
	{
		std::cout << "Counter strike\n";
	}
	void use()
	{
		std::cout <<"Use: "<< use2 << "\nMark: "<< getMark << "\n" << "Processor" <<Processor<<"\n";
	}
	~Computer() {};
};
