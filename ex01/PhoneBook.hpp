#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string.h>
# include <iostream>
# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
	
	public:
		void	Add(void);
		void	Search(void);
		void	Exit(void);
		void	Print(void);
};

#endif
