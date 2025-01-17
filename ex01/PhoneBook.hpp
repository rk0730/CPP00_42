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
	void display_contacts() const;
	std::string user_input(std::string prompt);
	void display_one_contact(int index) const;

public:
	PhoneBook();
	void ADD();
	void SEARCH();
};

#endif