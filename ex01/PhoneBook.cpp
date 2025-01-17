#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_added_count = 0;
}

void PhoneBook::ADD()
{
	std::cout << "Enter all fields of new contact" << std::endl;
	_contacts[_added_count % MAX_CONTACTS].set_first_name(_user_input("first name : "));
	_contacts[_added_count % MAX_CONTACTS].set_last_name(_user_input("last name : "));
	_contacts[_added_count % MAX_CONTACTS].set_nickname(_user_input("nickname : "));
	_contacts[_added_count % MAX_CONTACTS].set_phone_number(_user_input("phone number : "));
	_contacts[_added_count % MAX_CONTACTS].set_darkest_secret(_user_input("darkest secret : "));
	_added_count++;
}

void PhoneBook::SEARCH()
{
	int index;
	std::string index_str;
	_display_contacts();
	while (1)
	{
		std::cout << "Enter index of contact to display : ";
		std::getline(std::cin, index_str);
		if (index_str.size() != 1 || !std::isdigit(index_str[0]))
		{
			std::cout << "Invalid index" << std::endl;
			continue;
		}
		index = index_str[0] - '0';
		if (index < 0 || index >= std::min(_added_count, MAX_CONTACTS))
		{
			std::cout << "Invalid index" << std::endl;
		}
		else
		{
			break;
		}
	}
	_display_one_contact(index);
}

void PhoneBook::_display_contacts() const
{
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		if (_contacts[i].get_first_name().empty())
			break;
		std::cout << std::setw(10) << i << "|";
		if (_contacts[i].get_first_name().size() > 10)
		{
			std::cout << _contacts[i].get_first_name().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << _contacts[i].get_first_name() << "|";
		}
		if (_contacts[i].get_last_name().size() > 10)
		{
			std::cout << _contacts[i].get_last_name().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << _contacts[i].get_last_name() << "|";
		}
		if (_contacts[i].get_nickname().size() > 10)
		{
			std::cout << _contacts[i].get_nickname().substr(0, 9) << ".";
		}
		else
		{
			std::cout << std::setw(10) << _contacts[i].get_nickname();
		}
		std::cout << std::endl;
	}
}

std::string PhoneBook::_user_input(std::string prompt)
{
	std::string input;

	std::cout << prompt;
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "Input cannot be empty" << std::endl;
		std::cout << prompt;
		std::getline(std::cin, input);
	}
	return input;
}

void PhoneBook::_display_one_contact(int index) const
{
	std::cout << "first name : " << _contacts[index].get_first_name() << std::endl;
	std::cout << "last name : " << _contacts[index].get_last_name() << std::endl;
	std::cout << "nickname : " << _contacts[index].get_nickname() << std::endl;
	std::cout << "phone number : " << _contacts[index].get_phone_number() << std::endl;
	std::cout << "darkest secret : " << _contacts[index].get_darkest_secret() << std::endl;
}

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