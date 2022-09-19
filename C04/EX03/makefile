SRCS		=	main.cpp AMateria.Class.cpp Cure.Class.cpp Ice.Class.cpp MateriaSource.Class.cpp Player.Class.cpp
OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	Materia

CC					=	g++
CFLAGS				=	-Wshadow -Wall -Wextra -Werror -fsanitize=address -std=c++98\

all:		$(NAME)

$(NAME):	${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
				@rm -f ${OBJS}

fclean:		clean
				@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re