#include<iostream>
#include "Pair.h"
int main()
{
	Pair<int, char> obj(5,'g');
	std::cout << obj.get_first();
	std::cout << obj.get_second();

	 return 0;
}            

