#include "Stack.h"
#include<iostream>

int main()
{
	Stack<int> a ;
	Stack<int> b = a;
	Stack<int> c;
	Stack<int> m = std::move(c);
	c = a;
	c = std::move(b);

	std::cout<<a.empty()<<"\n";
	a.push(10);
	std::cout << a.empty() << "\n";
	a.pop();
	std::cout << a.empty() << "\n";
	std::cout<<a.get_top()<<"\n";
	std::cout << a.get_size()<<"\n";
	std::cout<<(a == m)<<"\n";
	std::cout << (a != m)<<"\n";



	return 0;
}


