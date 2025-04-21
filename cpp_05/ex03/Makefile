CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = bureaucrat
SRC = main.cpp Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME) 
	
$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re