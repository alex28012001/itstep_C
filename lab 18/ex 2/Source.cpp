#include "Automobile.h"
#include "Taxi.h"
#include<iostream>
int main()
{
	
	Taxi obj;
	Taxi obj2;
	std::cout << obj.payment(120)<<"$\n";
	std::cout << obj.payment(60) << "$\n";
	std::cout << obj.get_counter() << "\n";
	obj.getInfo();
	std::cout<<"Amount_of_money: "<<obj.get_sumMoney()<<"$\n";
	std::cout <<"Movement: "<< obj.move()<<"\n";


	return 0;
}
