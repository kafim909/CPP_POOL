SRCS		=	main.cpp Data.Class.cpp
OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	Serialize

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