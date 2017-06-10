#include "Students.h"
#include<iostream>
#include<string>



int main()
{

	Students a;


	std::string tmp;
	std::cout << "Input fio:";
	std::cin >> tmp;
	a.setfio(tmp);
	a.getfio();
	a.printl(tmp);
	std::cout << "\n\n";



	std::string c;
	std::cout << "Input years:";
	std::cin >> c;
	a.setyears(c);
	a.getyears();
	a.printl(c);
	std::cout << "\n\n";


	std::string tel;
	std::cout << "Input phone:";
	std::cin >> tel;
	a.setphone(tel);
	a.getphone();
	a.printl(tel);
	std::cout << "\n\n";


	std::string sh;
	std::cout << "Input school:";
	std::cin >> sh;
	a.setschool(sh);
	a.getschool();
	a.printl(sh);
	std::cout << "\n\n";




	std::string group;
	std::cout << "Input group:";
	std::cin >> group;
	a.setn_g(group);
	a.getn_g();
	a.printl(group);
	std::cout << "\n\n";

	


	return 0;
}
