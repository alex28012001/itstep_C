#pragma once

class Shape
{
public:
	virtual double getArea() = 0;
	virtual void info() = 0;
	virtual ~Shape(){};
};
