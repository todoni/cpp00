#include "PhoneBook.hpp"

void	PhoneBook::Add(void)
{
	std::string str("test");
	this->contacts[this->index % 8].SetFirstname(str);
	++this->index;
}

void	PhoneBook::Print(void)
{
	std::cout << this->contacts[0].GetFirstname() << std::endl;
}
