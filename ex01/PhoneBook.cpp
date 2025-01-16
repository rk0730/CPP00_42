#include "PhoneBook.hpp"

void PhoneBook::display_contacts() const
{
	std::cout << "Displaying contacts" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << contacts[i].get_first_name() << std::endl;
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
	contacts[0].set_first_name(user_input("first name : "));
	contacts[0].set_last_name(user_input("last name : "));
	contacts[0].set_nickname(user_input("nickname : "));
	contacts[0].set_phone_number(user_input("phone number : "));
	contacts[0].set_darkest_secret(user_input("darkest secret : "));
}

int main(void)
{
	PhoneBook pb;
	pb.ADD();
	pb.display_one_contact(0);
	return 0;
}