#include<iostream>
#include<string>
#include"Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include "Hamster.h"


void function(const std::string type, Pet * x)
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
			int choice_of_actions = 0;
			while (choice_of_actions != 4)
			{
				std::cout << "\nWhat do you want to know about the dog?\n1.Name\n2.Sound of a dog\n3.Type of animal\n4.Exit : ";
				std::cin >> choice_of_actions;
				switch (choice_of_actions)
				{
					case 1:std::cout << "\nName : ";
						dog->show(); break;
					case 2:std::cout << "\nSound : ";
						dog->sound(); break;
					case 3:std::cout << "\nType : ";
						dog->type(); break;
					default:std::cout << "Make the normal choice\n";
				}
			}
		}break;



		case 2: 
		{
			Pet * cat = new Cat;
			int choice_of_actions = 0;
			while (choice_of_actions != 4)
				{
					std::cout << "\nWhat do you want to know about the cat?\n1.Name\n2.Sound of a cat\n3.Type of animal\n4.Exit : ";
					std::cin >> choice_of_actions;
					switch (choice_of_actions)
					{
						case 1:std::cout << "\nName : ";
							cat->show(); break;
						case 2:std::cout << "\nSound : ";
							cat->sound(); break;
						case 3:std::cout << "\nType : ";
							cat->type(); break;
						default:std::cout << "Make the normal choice\n";
					}
				}
		}break;
		
		

		case 3:
		{
				  Pet * hamster = new Hamster;
				  int choice_of_actions = 0;
				  while (choice_of_actions != 4)
				  {
					  std::cout << "\nWhat do you want to know about the hamster?\n1.Name\n2.Sound of a hamster\n3.Type of animal\n4.Exit : ";
					  std::cin >> choice_of_actions;
					  switch (choice_of_actions)
					  {
					  case 1:std::cout << "\nName : ";
						  hamster->show(); break;
					  case 2:std::cout << "\nSound : ";
						  hamster->sound(); break;
					  case 3:std::cout << "\nType : ";
						  hamster->type(); break;
					  default:std::cout << "Make the normal choice\n";
					  }
				  }
		}break;
		



		case 4:
		{
				  Pet * parrot = new Parrot;
				  int choice_of_actions = 0;
				  while (choice_of_actions != 4)
				  {
					  std::cout << "\nWhat do you want to know about the parrot?\n1.Name\n2.Sound of a parrot\n3.Type of animal\n4.Exit : ";
					  std::cin >> choice_of_actions;
					  switch (choice_of_actions)
					  {
					  case 1:std::cout << "\nName : ";
						  parrot->show(); break;
					  case 2:std::cout << "\nSound : ";
						  parrot->sound(); break;
					  case 3:std::cout << "\nType : ";
						  parrot->type(); break;
					  default:std::cout << "Make the normal choice\n";
					  }
				  }
		}break;
		default:std::cout << "Make the normal choice\n";	
	}
	
	return 0;
}
















