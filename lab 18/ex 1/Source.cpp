#include<iostream>
#include<string>
#include"Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include "Hamster.h"


int function(const std::string type, Pet * x)
{
	int choice_of_actions = 0;
	while (choice_of_actions != 4)
	{
		std::cout << "\nWhat do you want to know about the "<<type<<"?\n1.Name\n2.Sound of a"<<type<<"\n3.Type of animal\n4.Exit : ";
		std::cin >> choice_of_actions;
		switch (choice_of_actions)
		{
		case 1:std::cout << "\nName : ";
			x->show(); break;
		case 2:std::cout << "\nSound : ";
			x->sound(); break;
		case 3:std::cout << "\nType : ";
			x->type(); break;
		case 4: return 1; break;
		default:std::cout << "Make the normal choice\n";
		}
	}
}


int main()
{
	int choice_animal;
	std::cout << "Hello, what kind of animal do you want to have?\n1.Dog\n2.Cat\n3.Hamster\n4.Parrot : ";
	std::cin >> choice_animal;
	switch (choice_animal)
	{
		case 1: 
		{
			Pet * dog = new Dog;
			function("dog",dog);
		}break;

		case 2: 
		{
			Pet * cat = new Cat;
			function("cat",	cat);
		}break;
		
		case 3:
		{
			Pet * hamster = new Hamster;
			function("hamster", hamster);
		}break;
		
		case 4:
		{
			Pet * parrot = new Parrot;
			function("parrot", parrot);
		}break;

		default:std::cout << "Make the normal choice\n";	
	}
	
	return 0;
}
