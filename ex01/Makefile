CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
OBJECT = main.o PhoneBook.o Contact.o

%.o : %.cc
	$(CXX) $(CXXFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJECT)
	$(CXX) $(CXXFLAGS) $(OBJECT) -o $@

clean :
	rm -f $(OBJECT)

fclean :
	rm -f $(OBJECT)
	rm -f $(NAME)
re :
	rm -f $(OBJECT)
	rm -f $(NAME)
	make $(NAME)

.PHONY : all clean fclean re
