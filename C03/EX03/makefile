SRCS		=	main.cpp ClapTrap.Class.cpp ScavTrap.Class.cpp FragTrap.Class.cpp DiamondTrap.Class.cpp
OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	DiamondTrap

CC					=	g++
CFLAGS				=	-Wshadow -Wall -Wextra -Werror -std=c++98\

all:		$(NAME)

$(NAME):	${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
				@rm -f ${OBJS}

fclean:		clean
				@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re