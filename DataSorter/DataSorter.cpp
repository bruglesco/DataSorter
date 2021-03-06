// DataSorter.cpp : Defines the entry point for the console application.

#include "control_flow_functions.h"

#include <iostream>
#include <string>

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
		std::cerr << "Too many command line arguments.\n"
			"input has been truncated to the first argument.";
	}

	run_program(file_name);
}
