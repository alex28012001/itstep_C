#pragma once
class Square
{
	int a, b, square, square2;

public:
	Square(){};
	int getsquare_1side()const;
	void setsquare_1side(int side1);
	int answer_1side() const;

	int getsquare_2side()const;
	void setsquare_2side(int side2);
	int answer_2side() const;







	~Square(){};
};

