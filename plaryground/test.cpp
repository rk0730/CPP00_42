#include <iostream>

int main(void)
{
	while (1)
	{
		std::string command;
		std::cout << "Enter a numver: ";
		std::getline(std::cin, command);
		int num = std::stoi(command);
		if (num == 0)
			break;
		std::cout << "You entered: " << num << std::endl;
	}
}