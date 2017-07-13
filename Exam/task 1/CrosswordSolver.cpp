#include"CrosswordSolver.h"
#include<iostream>
#include<string>
#include<fstream>


CrosswordSolver::CrosswordSolver()
{
	setlocale(0, "");
	std::ifstream file("Lopatin_dictionary.txt");
	if (!file.is_open())
		std::cout << "File not found";
	
	std::string tmp;
	while (file >> tmp)
	{
		temp.push_back(tmp);
	}

	file.close();
}


void CrosswordSolver::getAllWithLen(const int x)
{		
	for (auto it : temp)
	{
		if (it.length() == x)
			std::cout << it<<"\n";
	}	
}

void CrosswordSolver::getAllWithInit(const char x)
{

	


	for (auto it = temp.begin(); it != temp.end(); ++it)
	{
		if(*it == x)
	}
}
