// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>


int main()
{
	double west{ 36364.87 };
	double midwest{ 12431.33 };
	double east{ 127690.50 };
	double south{ 9200.00 };

	std::cout.imbue(std::locale("en-US"));
	std::cout << std::fixed << std::setprecision(2);

	std::cout << std::setw(10) << std::right << "West: " << std::left << "$" << std::right << std::setw(10) << west << std::endl;

	std::cout << std::setw(10) << std::right << "Midwest: " << std::left << "$" << std::right << std::setw(10) << midwest << std::endl;

	std::cout << std::setw(10) << std::right << "East: " << std::left << "$" << std::right << std::setw(10) << east << std::endl;

	std::cout << std::setw(10) << std::right << "South: " << std::left << "$" << std::right << std::setw(10) << south << std::endl;


    return 0;
}

