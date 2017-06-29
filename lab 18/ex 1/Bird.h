#pragma once
#include<iostream>
#include<string>
class Bird
{
	std::string type = "predator";
public:
	Bird() {};
	void show_type()
	{
		std::cout << type;
	}
	
	virtual ~Bird() {};
};
