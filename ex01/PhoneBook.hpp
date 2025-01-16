#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];

public:
	void display_contacts();
	void display_one_contact(int index);
};

#endif