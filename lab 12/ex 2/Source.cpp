
#include<iostream>
#include<fstream>
#include<queue>
int main()
{
	std::ifstream file_input("input.txt");
	if (!file_input.is_open())
	{
		std::cout << "Eroor";
		return 1;
	}
	std::queue<char> words;
	char temp;
	std::queue<char> numbers;
	while (file_input >> temp)
	{
		if (isalpha(temp))
			words.push(temp);
		if (isdigit(temp))
			numbers.push(temp);
	}

	std::ofstream file_out("output.txt");
	if (!file_out.is_open())
	{
		std::cout << "Eroor";
		return 1;
	}
		while (!words.empty())
		{
			file_out << words.front();
			words.pop();
		}
		while (!numbers.empty())
		{
			file_out << numbers.front();
			numbers.pop();
		}
	

	return 0;
}
