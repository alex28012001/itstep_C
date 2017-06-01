#pragma once
#include<iostream>
#include<string>
#include<fstream>



class Text
{
	std::string * str;
	size_t size;
	int maxlen;

	void f(std::string name);
	
		
public:

	Text();
	Text( int count) ;
	Text( std::string name);
	Text( int count, std::string name);
	Text(const Text &a) ;
	Text(Text&&a) ;
	int get_max_len()const;
	std::string get_max_word()const;
	~Text() { delete[]str; };
};

