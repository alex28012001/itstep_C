#pragma once
#include<iostream>
#include<string>


class PrettyPrint
{
	std::string str1 = "";
	std::string str2 = "";

public:
	PrettyPrint(){};

	std::string getstr1()const;
	std::string getstr2()const;
	void setstr1(std::string str);
	void setstr2(std::string str);
	


	std::string concatenation(std::string str1, std::string str2)const;
	std::string substitution(std::string str1);
	void reverse(char *p);
	
	~PrettyPrint(){};
};

