// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>


int main()
{

	double UserNumber{};
	std::cout << "Enter a number: " << std::endl;
	std::cin >> UserNumber;

	std::cout << std::scientific << UserNumber << std::endl;
	
	return 0;
}

