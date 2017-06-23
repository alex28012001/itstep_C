#include "Queue.h"
#include<iostream>
int main()
{
	Queue<int>a;
	std::cout <<"Empty : "<< a.empty() << "\n";
	a.push(10);
	std::cout << "Empty : " << a.empty() << "\n";
	a.pop();
	std::cout << "Empty : " << a.empty() << "\n";
	for (size_t i = 0; i < 10;i++)
		a.push(i);
	std::cout << "Empty : " << a.empty() << "\n";
	std::cout << "Size : " << a.size() << "\n";
	std::cout <<"Back : "<< a.back() << "\n";
	std::cout << "Front : " << a.front() << "\n";
	a.clear();
	std::cout << "Empty : " << a.empty() << "\n";
	Queue<int>b = a;
	Queue<int>c = std::move(a);
	Queue<int>g;
	g = a;
	a = std::move(c);
	



	return 0;
}
