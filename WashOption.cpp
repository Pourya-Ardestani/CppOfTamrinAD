#include "WashOption.h"

int WashOption::getWashSelection()
{
	std::cout << "Enter selection: ";
	std::cin >> washSelection;
	return washSelection;
}