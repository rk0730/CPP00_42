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

void PhoneBook::set_contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	contacts[index].set_first_name(first_name);
	contacts[index].set_last_name(last_name);
	contacts[index].set_nickname(nickname);
	contacts[index].set_phone_number(phone_number);
	contacts[index].set_darkest_secret(darkest_secret);
}

int main(void)
{
	PhoneBook pb;
	pb.set_contact(0, "Alice", "Johnson", "AJ", "123-456-7890", "Afraid of clowns");
	pb.display_one_contact(0);
	return 0;
}