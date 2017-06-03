#include "PrettyPrint.h"
#include<string>





std::string PrettyPrint :: getstr1()const
{
	return str1;
}

std::string PrettyPrint::getstr2()const
{
	return str2;
}

void PrettyPrint::setstr1(std::string str)
{
	str1 = str;
}

void PrettyPrint::setstr2(std::string str)
{
	str2 = str;
}







std::string PrettyPrint::concatenation(std::string str1, std::string str2)const
{
	std::string str = str1 + '.' + str2;
	return str;
}

std::string PrettyPrint::substitution(std::string str1)
{
		for (std::string::iterator a = str1.begin(); a != str1.end(); ++a)
			if (*a == 'a')
				*a = 'o';
		return str1;

}

void PrettyPrint :: reverse(char *p)
{
	if (*p)
		reverse(p + 1);
	else return;
	std::cout << *p;

}
