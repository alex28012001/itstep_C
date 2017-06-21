
#include "Stack.h"
#include<iostream>

int main()
{
	Stack<int> a;
	Stack<int> m;
	std::cout <<"Empty : "<< a.empty() << "\n";
	a.push(10);
	std::cout << "Empty : " << a.empty() << "\n";
	a.pop();
	std::cout << "Empty : " << a.empty() << "\n";
	a.push(100);
	a.push(200);
	std::cout << "get_top :  : " << a.get_top() << "\n";
	std::cout << "get_size : "<< a.get_size() << "\n";
	std::cout <<"Operator == : "<< (a == m) << "\n";
	std::cout <<"Operator != : "<< (a != m) << "\n";
	Stack<int> b = a;
	Stack<int> g = std::move(b);
	Stack<int> c;
	c = a;
	c = std::move(b);
	
	
	return 0;
}

