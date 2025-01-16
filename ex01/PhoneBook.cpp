#include "PhoneBook.hpp"

void PhoneBook::display_contacts()
{
	std::cout << "Displaying contacts" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << contacts[i].get_first_name() << std::endl;
	}
}

void PhoneBook::display_one_contact(int index)
{
	std::cout << "first name : " << contacts[index].get_first_name() << std::endl;
	std::cout << "last name : " << contacts[index].get_last_name() << std::endl;
	std::cout << "nickname : " << contacts[index].get_nickname() << std::endl;
	std::cout << "phone number : " << contacts[index].get_phone_number() << std::endl;
	std::cout << "darkest secret : " << contacts[index].get_darkest_secret() << std::endl;
}

int main(void)
{
	PhoneBook pb;
	pb.display_one_contact(0);
	return 0;
}