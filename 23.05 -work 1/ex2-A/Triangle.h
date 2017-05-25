#pragma once
class Triangle
{
	int square,square2,square3, height, base, side1, side2, angle, side_a,side_b,side_c;
	
public:

	Triangle(){};
	int getsquare_height_base()const;
	void setsquare_height_base(int height, int base);
	int answer_square_height_base()const;

	int getsquare_2side_angle()const;
	void setsquare_2side_angle(int side1, int side2, int angle);
	int answer_square_2side_angle()const;

	int getsquare_3side()const;
	void setsquare_3side(int side_a, int side_b, int side_c);
	int answer_square_3side()const;

	


	~Triangle(){};
};

