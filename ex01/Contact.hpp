#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string first_name;
public:
	Contact();
	std::string get_first_name() const;
};

#endif