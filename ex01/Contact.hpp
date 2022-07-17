#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		void		SetFirstname(std::string str);
		void		SetLastname(std::string str);
		void		SetNickname(std::string str);
		void		SetPhoneNumber(std::string str);
		void		SetDarkestSecret(std::string str);

		std::string	GetFirstname(void);
		std::string	GetLastname(void);
		std::string	GetNickname(void);
		std::string	GetPhoneNumber(void);
		std::string	GetDarkestSecret(void);
};

#endif
