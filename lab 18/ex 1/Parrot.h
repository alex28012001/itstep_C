#pragma once
#include"Pet.h"
#include "Bird.h"
#include<string>
class Parrot : public Pet, public Bird
{
public:
	Parrot() : Pet("Galic",5,"yellow","bird") {};
	void sound() 
	{
		std::cout << "Hr hr hr hr\n";
	}
		
	~Parrot() {};
};
