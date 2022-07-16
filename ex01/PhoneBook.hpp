#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string.h>
# include "Contact.hpp"

class	PhoneBook
{
	private :
		Contact contacts[8];
	public:
		void	Search();
		void	Add();

};

#endif
