#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	added_count = 0;
}

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
	std::cout << std::setw(20) << "first name : " << contacts[index].get_first_name() << std::endl;
	std::cout << std::setw(20) << "last name : " << contacts[index].get_last_name() << std::endl;
	std::cout << std::setw(20) << "nickname : " << contacts[index].get_nickname() << std::endl;
	std::cout << std::setw(20) << "phone number : " << contacts[index].get_phone_number() << std::endl;
	std::cout << std::setw(20) << "darkest secret : " << contacts[index].get_darkest_secret() << std::endl;
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

int main(void)
{
	PhoneBook pb;
	pb.ADD();
	pb.display_one_contact(0);
	return 0;
}