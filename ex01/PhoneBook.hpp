#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private :
		Contact contacts[8];
		std::string bla;
		// 1. Contact를 쓰지 않아서 Contact.hpp를 include에서 삭제 한다면? 
		// 2. Contact.hpp 에서 <string> 을 삭제한다면?
	public:
};

#endif
