#pragma once
#include"Pet.h"
#include<string>
class Dog : public Pet
{
public:
	Dog() : Pet("Bobik",4,"black","dog") {};
	void sound()
	{
		std::cout << "Gav gav gav\n";
	}

	~Dog() {};
};
