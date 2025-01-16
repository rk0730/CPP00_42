#include "Contact.hpp"

Contact::Contact()
{
	first_name = "init";
}

std::string Contact::get_first_name() const
{
	return first_name;
}