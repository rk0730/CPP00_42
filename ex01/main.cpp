#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook pb;
	while (1)
	{
		std::string command;
		std::cout << "Enter a command (ADD, SEARCH, EXIT) : ";
		std::getline(std::cin, command);
		if (command == "ADD")
			pb.ADD();
		else if (command == "SEARCH")
			pb.SEARCH();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}
