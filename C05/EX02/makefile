SRCS		=	main.cpp Bureaucrat.Class.cpp AForm.Class.cpp ShrubberyCreationForm.Class.cpp PresidentialPardonForm.Class.cpp RobotomyRequestForm.Class.cpp
OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	Bureaucrat

CC					=	g++
CFLAGS				=	-Wshadow -Wall -Wextra -Werror -fsanitize=address -std=c++98\

all:		$(NAME)

$(NAME):	${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
				@rm -f ${OBJS}

fclean:		clean
				@rm -f $(NAME) Garden2_shrubbery Garden3_shrubbery

re:			fclean all

.PHONY:		all clean fclean re