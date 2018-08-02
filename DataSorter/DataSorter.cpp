// DataSorter.cpp : Defines the entry point for the console application.
//

#include <iomanip>
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	std::string file_name;
	if (argc == 0 || argc == 1)
	{
		std::cout << "please enter a filename";
		std::cin >> file_name;
	}
	if (argc == 2)
	{
		file_name = argv[2];
	}
	else
	{
		std::cerr << "too many command line arguments\n";
		std::cout << "please enter a file name\n";
		std::cin >> file_name;
	}


	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
