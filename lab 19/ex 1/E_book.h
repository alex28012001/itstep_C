#pragma once
#include"Device.h"
#include<iostream>
#include<string>
class E_book : public Device
{
	std::string use2;
	std::string maxMbrightness;
public:
	E_book() : Device("asus"), use2("read"),maxMbrightness("200%") {};
	void printFavoriteBook()
	{
		std::cout << "Harry Poters";
	}
	void use()
	{
		std::cout << "Use: " << use2 << "\nMark: " << getMark << "\nMaxBrightness: " << maxMbrightness << "\n";
	}
	~E_book() {};
};

 
