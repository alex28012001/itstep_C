#include<iostream>
#include<vector>
#include<algorithm>
class Count
{
	int value;
public:
	Count(const int x) : value(x){};
	bool operator()(const int &y)
	{
		return y == value;
	}
	~Count(){};
};

class CountN
{
	int value;
public:
	CountN(const int x) : value(x){};
	bool operator()(const int &y)
	{
		return y % value == 0;
	}
	~CountN(){};
};

class Search
{
	int value;
public:
	Search(const int x) : value(x){};
	bool operator()(int y)
	{
		while (y > 10)
			y /= 10;

		return y == value;
	}
	~Search(){};
};

bool ThreeDigit(const int& y)
{
	return (y / 100 >= 1 && y / 100 < 10);
}
	
class Square
{
	int value;
public:
	Square(const int x) : value(x){};
	bool operator()(const int& y)
	{
		for (int i = 1; i <= value; ++i)
		{
			if (i * i == y)
				return true;
		}
		return false;
	}
	~Square(){};
};
	

void print(std::vector<int> x)
{
	for (auto it : x)
		std::cout << it << " ";
}

int main()
{
	std::vector<int> obj = {5,5,158,300};
	for (int i = -15; i <= 15; ++i)
		obj.push_back(i);
	print(obj);
	std::cout << std::endl;
	auto it = std::remove_if(obj.begin(), obj.end(), Count(5));
	obj.erase(it, obj.end());
	print(obj);
	std::cout << std::endl;
	std::cout << std::count_if(obj.begin(), obj.end(), CountN(5))<<"\n";
	std::replace_if(obj.begin(), obj.end(), Search(10), 666);
	print(obj);
	std::cout << std::endl;
	std::cout<< std::count_if(obj.begin(), obj.end(), ThreeDigit)<<"\n";
	auto it2 = std::remove_if(obj.begin(), obj.end(), Square(10));
	obj.erase(it2, obj.end());
	print(obj);
	std::cout << std::endl;
		

	return 0;
}
