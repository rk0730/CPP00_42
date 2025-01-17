#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	added_count = 0;
}

void PhoneBook::display_contacts() const
{
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		if (contacts[i].get_first_name().empty())
			break;
		std::cout << std::setw(10) << i << "|";
		if (contacts[i].get_first_name().size() > 10)
		{
			std::cout << contacts[i].get_first_name().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << contacts[i].get_first_name() << "|";
		}
		if (contacts[i].get_last_name().size() > 10)
		{
			std::cout << contacts[i].get_last_name().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << contacts[i].get_last_name() << "|";
		}
		if (contacts[i].get_nickname().size() > 10)
		{
			std::cout << contacts[i].get_nickname().substr(0, 9) << ".";
		}
		else
		{
			std::cout << std::setw(10) << contacts[i].get_nickname();
		}
		std::cout << std::endl;
	}
}

void PhoneBook::display_one_contact(int index) const
{
	std::cout << "first name : " << contacts[index].get_first_name() << std::endl;
	std::cout << "last name : " << contacts[index].get_last_name() << std::endl;
	std::cout << "nickname : " << contacts[index].get_nickname() << std::endl;
	std::cout << "phone number : " << contacts[index].get_phone_number() << std::endl;
	std::cout << "darkest secret : " << contacts[index].get_darkest_secret() << std::endl;
}

std::string PhoneBook::user_input(std::string prompt)
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

void PhoneBook::ADD()
{
	std::cout << "Enter all fields of new contact" << std::endl;
	contacts[added_count % MAX_CONTACTS].set_first_name(user_input("first name : "));
	contacts[added_count % MAX_CONTACTS].set_last_name(user_input("last name : "));
	contacts[added_count % MAX_CONTACTS].set_nickname(user_input("nickname : "));
	contacts[added_count % MAX_CONTACTS].set_phone_number(user_input("phone number : "));
	contacts[added_count % MAX_CONTACTS].set_darkest_secret(user_input("darkest secret : "));
	added_count++;
}

void PhoneBook::SEARCH()
{
	int index = -1;
	std::string index_str;
	display_contacts();
	while (index < 0 || index >= std::min(added_count, MAX_CONTACTS))
	{
		std::cout << "Enter index of contact to display : ";
		std::getline(std::cin, index_str);
		try
		{
			index = std::stoi(index_str);
			if (index < 0 || index >= added_count)
				throw std::exception();
		}
		catch(const std::exception& e)
		{
			std::cerr << "Invalid index" << std::endl;
		}
	}
	display_one_contact(index);
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