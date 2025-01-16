#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];

public:
	void display_contacts() const;
	void display_one_contact(int index) const;
	void set_contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
};

#endif