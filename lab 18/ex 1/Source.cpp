#include<iostream>
#include"Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include "Hamster.h"
int main()
{
	Pet * cat = new  Cat;
	cat->show();
	cat->sound();
	cat->type();


	return 0;
}
















