#pragma once
#include"Pet.h"
#include<string>
class Hamster : public Pet
{
	std::string name;
public:
	Hamster() : name(""){};
	~Hamster(){};
};
