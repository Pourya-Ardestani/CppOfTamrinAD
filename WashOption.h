#pragma once
class WashOption
{
private:
	int washSelection;
public:
	int getWashSelection();
};

int WashOption::getWashSelection() 
{
	std::cout << "Enter selection: ";
	std::cin >> washSelection;
	return washSelection;
}