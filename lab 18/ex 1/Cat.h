#pragma once
#include"Pet.h"
#include<string>
class Cat : public Pet
{
public:
	Cat() : Pet("Vasy",6,"white","cat") {};
	void sound()
	{
		std::cout << "Meaw meaw meaw\n";
	}


	~Cat() {};
};
