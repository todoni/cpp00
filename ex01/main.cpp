#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string	cmd("");

	while (!std::cin.eof() && cmd != "EXIT")
	{
		std::cout << "Enter Command(ADD / SEARCH / EXIT):";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phoneBook.Add();
		else if (cmd == "SEARCH")
			phoneBook.Search();
		else if (cmd == "EXIT" || std::cin.eof())
			continue ;
		else
			std::cout << "Invalid Command" << std::endl;
	}
	return (0);
}
