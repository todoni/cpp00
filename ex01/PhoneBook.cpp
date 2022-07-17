#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
	: index(0)
{

}

void	PhoneBook::Add(void)
{
	std::string str("");

	while (!std::cin.eof() && str == "")
	{
		std::cout << "First Name:";
		std::getline(std::cin, str);
		if (str != "")
			this->contacts[this->index % 8].SetFirstname(str);
		else
			std::cout << "Fields cannot be empty." << std::endl;
	}
	
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Last Name:";
		std::getline(std::cin, str);
		if (str != "")
			this->contacts[this->index % 8].SetLastname(str);
		else
			std::cout << "Fields cannot be empty." << std::endl;
	}
	
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Nick Name:";
		std::getline(std::cin, str);
		if (str != "")
			this->contacts[this->index % 8].SetNickname(str);
		else
			std::cout << "Fields cannot be empty." << std::endl;
	}
	
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Phone Number:";
		std::getline(std::cin, str);
		if (str != "")
			this->contacts[this->index % 8].SetPhoneNumber(str);
		else
			std::cout << "Fields cannot be empty." << std::endl;
	}
	
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Your Darkest Secret....:";
		std::getline(std::cin, str);
		if (str != "")
			this->contacts[this->index % 8].SetDarkestSecret(str);
		else
			std::cout << "Fields cannot be empty." << std::endl;
	}
	++this->index;
}

std::string	getFixedWidthField(std::string str)
{
	std::string newStr;

	newStr = str.substr(0, 10);
	if (str.size() > 10)
		newStr[9] = '.';
	return (newStr);
}

void	PhoneBook::Search(void)
{
	int	index;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index| Last Name|First Name| Nick Name|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	
	for (int i = 0; i < this->index; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << getFixedWidthField(this->contacts[i].GetLastname());
		std::cout << "|" << std::setw(10) << getFixedWidthField(this->contacts[i].GetFirstname());
		std::cout << "|" << std::setw(10) << getFixedWidthField(this->contacts[i].GetNickname()) << "|" << std::endl;
		if (i ==  7)
			break ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Enter Index for more:";
	std::cin >> index;
	if (std::cin.fail())
		std::cout << "Index is Not Number" << std::endl;
	else
		this->PrintDetail(index);
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	PhoneBook::PrintDetail(int index)
{
	if (index < this->index)
	{
		std::cout << "First Name    : " << this->contacts[index].GetFirstname() << std::endl;
		std::cout << "Last Name     : " << this->contacts[index].GetLastname() << std::endl;
		std::cout << "Nick Name     : " << this->contacts[index].GetNickname() << std::endl;
		std::cout << "Phone Number  : " << this->contacts[index].GetPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->contacts[index].GetDarkestSecret() << std::endl;	
	}
	else
		std::cout << "Invalid Index" << std::endl;
}
