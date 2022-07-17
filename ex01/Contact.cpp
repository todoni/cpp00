#include "Contact.hpp"

void Contact::SetFirstname(std::string str)
{
	this->firstName = str;	
}

void Contact::SetLastname(std::string str)
{
	this->lastName = str;	
}

void Contact::SetNickname(std::string str)
{
	this->nickName = str;	
}

void Contact::SetPhoneNumber(std::string str)
{
	this->phoneNumber = str;	
}

void Contact::SetDarkestSecret(std::string str)
{
	this->darkestSecret = str;	
}

std::string Contact::GetFirstname(void)
{
	return (this->firstName);	
}

std::string Contact::GetLastname(void)
{
	return (this->lastName);	
}

std::string Contact::GetNickname(void)
{
	return (this->nickName);	
}

std::string Contact::GetPhoneNumber(void)
{
	return (this->phoneNumber);	
}

std::string Contact::GetDarkestSecret(void)
{
	return (this->darkestSecret);	
}
