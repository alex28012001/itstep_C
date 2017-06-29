#pragma once
#include<iostream>
#include<string>
class Pet
{
	std::string name;
	int age;
	std::string color;
	std::string animal;
public:
	Pet(std::string x,int y, std::string c,std::string b) : name(x),age(y),color(c),animal(b){};
	void show()
	{
		std::cout << name;
	}
	virtual void sound() = 0;
	virtual void type()
	{
		std::cout << animal;
	}
	virtual ~Pet() {};
};
