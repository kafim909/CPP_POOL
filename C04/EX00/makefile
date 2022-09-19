SRCS		=	main.cpp Animal.Class.cpp Cat.Class.cpp Dog.Class.cpp WrongAnimal.Class.cpp WrongCat.Class.cpp
OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	Animal

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