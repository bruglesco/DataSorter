// DataSorter.cpp : Defines the entry point for the console application.
//
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "helper_functions.h"

using namespace bruglesco;

int main(int argc, char* argv[])
{

	std::string file_name;
	if (argc == 0 || argc == 1)
	{
		std::cout << "Please enter a filename.\n";
		std::cin >> file_name;
	}
	else if (argc == 2)
	{
		file_name = argv[2];
	}
	else
	{
		std::cerr << "Too many command line arguments.\n";
		std::cout << "Please enter a file name.\n";
		std::cin >> file_name;
	}

	std::vector<student> data;
	data.reserve(100);

	save_data_to_memory(data, file_name);

	sort_data(data);

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
