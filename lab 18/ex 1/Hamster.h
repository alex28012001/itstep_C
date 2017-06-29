#pragma once
#include"Pet.h"
#include<string>
class Hamster : public Pet
{
public:
	Hamster() : Pet("Homa",2,"black","rodent") {};
	void sound()
	{
		std::cout << "Sh hr sh hr\n";
	}



	~Hamster() {};
};
