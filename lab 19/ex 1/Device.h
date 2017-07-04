#pragma once
#include<string>
class Device
{
	std::string mark;
public :
	Device(const std::string x) : mark(x){};
	virtual void use() = 0;
	std::string getMark()
	{
		return mark;
	}
	~Device(){};
};
