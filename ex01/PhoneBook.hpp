#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string.h>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
	
	public:
		PhoneBook(void);
		void	Add(void);
		void	Search(void);
		void	PrintDetail(int index);
};

#endif
