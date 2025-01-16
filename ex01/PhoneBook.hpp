#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	std::string user_input(std::string prompt);

public:
	void display_contacts() const;
	void display_one_contact(int index) const;
	void ADD();
};

#endif