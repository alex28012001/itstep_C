#pragma once
#include"Device.h"
#include"Computer.h"
#include"Telephone.h"
#include<iostream>
#include<string>
class Smartphone :public Computer, public Telephone
{
	std::string use2;
	std::string size_screen;
public:
	Smartphone(std::string s) : Device(s), size_screen("100x200px") {};
	void use()
	{

	}

		
	~Smartphone() {};
};
