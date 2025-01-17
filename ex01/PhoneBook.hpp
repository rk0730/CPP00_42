#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
public:
	PhoneBook();
	void ADD();
	void SEARCH();
private:
	Contact _contacts[MAX_CONTACTS];
	int _added_count;

	void _display_contacts() const;
	std::string _user_input(std::string prompt);
	void _display_one_contact(int index) const;
};

#endif