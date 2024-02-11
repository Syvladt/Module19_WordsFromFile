#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::fstream text;
	std::string inStr, schStr;
	int summ = 0;

	std::cout << "Enter the word you are looking for: ";
	std::cin >> schStr;
	text.open("words.txt");
	while(!text.eof())
	{
		text >> inStr;
		if (inStr == schStr)
			summ++;
	}
	text.close();
	std::cout << "The search word " << schStr << " occurs " << summ << " times." << std::endl;
}