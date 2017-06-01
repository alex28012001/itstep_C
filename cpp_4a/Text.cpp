#include "Text.h"
#include<iostream>
#include<fstream>



void Text::f(std::string name)
{
	std::ifstream  filein("test_text.txt");
	if (!filein.is_open())
	{
		std::cout << "File not found\n";
	}

	std::string tmp;
	while (filein >> tmp)
	{
		++size;
	}
	str = new std::string[size];
	filein.clear();
	filein.seekg(0);

	for (int i = 0; i < size; ++i)
	{
		filein >> tmp;
		str[i] = tmp;
		if (str[i].length() > maxlen)
			maxlen = str[i].length();
	}

	filein.close();
}



Text::Text () 
{
	f("test_text.txt");
};

Text::Text (int count)
{
	std::ifstream filein("test_text.txt");
	if (!filein.is_open())
	{
		std::cout << "File not found\n";
	}



	std::string tmp;
	while (filein >> tmp)
	{
		++size;
	}

	if (count < 0 || count > size)
	{
		std::cout << "Error";
	}




	else
	{

		str = new std::string[count];
		filein.clear();
		filein.seekg(0);

		for (int i = 0; i < count; ++i)
		{
			filein >> tmp;
			str[i] = tmp;
		}



	}





	filein.close();
};

Text::Text( std::string name)
{
	f("test_text.txt");
};

Text::Text( int count,  std::string name)
{



	std::ifstream filein(name);
	if (!filein.is_open())
	{
		std::cout << "File not found\n";
	}



	std::string tmp;
	while (filein >> tmp)
	{
		++size;
	}

	if (count < 0 || count > size)
	{
		std::cout << "Error";
	}




	else
	{

		str = new std::string[count];
		filein.clear();
		filein.seekg(0);

		for (int i = 0; i < count; ++i)
		{
			filein >> tmp;
			str[i] = tmp;
		}



	}





	filein.close();


};






Text::Text(const Text &a) : size(a.size)
{
	str = new std::string[size];

	for (int i = 0; i < size; ++i)
	{
		str[i] = a.str[i];
	}

};

Text::Text(Text&&a) : size(a.size), str(a.str)
{
	a.size = 0;
	a.str = nullptr;
};





int Text :: get_max_len()const
{
  return maxlen;

}



/*

std::string Text :: get_max_word()const
{
	int  maxlen = 0, index = 0;

	for (int i = 0;i<size; ++i)
	{
		

	}
		
}
*/
