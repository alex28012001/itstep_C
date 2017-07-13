#pragma once
#include<string>
#include<fstream>
#include<vector>
class CrosswordSolver
{
	std::vector<std::string> temp;
	
public:
	CrosswordSolver() ;
	void getAllWithLen(const int x);
	void getAllWithInit(const char x);
	~CrosswordSolver() {};
};
