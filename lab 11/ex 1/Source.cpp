#include<iostream>

#include "Pair.h"
int main()
{
	Pair<int, char> obj(10,'d');
	std::cout<<"First : " << obj.get_first()<<"\n";
	std::cout << "Second : " << obj.get_second() << "\n";
	obj.make_pair(100,'g');
	std::cout <<"First : "<< obj.get_first() << "\n";
	std::cout <<"Second : "<< obj.get_second() << "\n\n\n";

	Pair<bool, bool> obj_bool(true);
	std::cout << "First(bool) : " << obj_bool.get_first() << "\n";
	std::cout << "Second(bool) : " << obj_bool.get_second() << "\n";
	obj_bool.make_pair(false);
	std::cout << "First(bool) : " << obj_bool.get_first() << "\n";
	std::cout << "Second(bool) : " << obj_bool.get_second() << "\n";
	
	return 0;
}
