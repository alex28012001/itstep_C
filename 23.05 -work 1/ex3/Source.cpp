#include "PrettyPrint.h"
#include<iostream>



int main()
{
	PrettyPrint str;
	std::string str1, str2;
	char str3[] ="";
	
	std::cout<<"Concatenation\n\n";
	std::cout << "Input str1: ";
	std::cin >> str1;
	std::cout << "Input str2: ";
	std::cin >> str2;
	str.getstr1();
	str.setstr1(str1);
	str.getstr2();
	str.setstr2(str2);
	std::cout << "Answer(concatenation): " << str.concatenation(str1, str2) << "\n\nSubstitution\n\n";
	std::cout << "Answer(substitution):" << str.substitution(str1) << "\n\nCoup\n\n";
	std::cout << "Input str3: ";
	std::cin >> str3;

	std::cout << "Answer(coup): ";
	str.reverse(str3);
	








	return 0;
}
