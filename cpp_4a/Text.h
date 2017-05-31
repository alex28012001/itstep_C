#pragma once
#include<iostream>
#include<string>
#include<fstream>



class Text
{
	std::string * str;
	size_t size;


public:
	Text() 
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

		for(int i = 0;i<size;++i)
		{
			filein >> tmp;
			str[i] = tmp; 
		}



		filein.close();
	};






	Text(const int count) 
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






	Text(std::string name) 
	{
	
		
	
	
		std::ifstream  filein(name);
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

		for (int i = 0; i<size; ++i)
		{
			filein >> tmp;
			str[i] = tmp;
		}



		filein.close();
	};




	Text(int count, std::string name)
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




	Text(const Text &a)
	{
		this->size = size;
		for (int i = 0; i < size; ++i)
		{

		}

		
	};


	Text(Text&&a) {};


	std::string get_max_len()const;
	std::string get_max_word()const;







	~Text() { delete[]str; };
};

