#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
private:
	Contact contacts[MAX_CONTACTS];
	int added_count;
	std::string user_input(std::string prompt);

public:
	PhoneBook();
	void display_contacts() const;
	void display_one_contact(int index) const;
	void ADD();
};

#endif