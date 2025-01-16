#include "PhoneBook.hpp"

void PhoneBook::display_contacts()
{
	std::cout << "Displaying contacts" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << contacts[i].get_first_name() << std::endl;
	}
}

int main(void)
{
	PhoneBook pb;
	pb.display_contacts();
	return 0;
}