SRCS		=	main.cpp HumanA.Class.cpp HumanB.Class.cpp Weapon.Class.cpp
OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	Combat

CC					=	g++
CFLAGS				=	-Wall -Wextra -Werror -std=c++98\

all:		$(NAME)

$(NAME):	${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
				@rm -f ${OBJS}

fclean:		clean
				@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re