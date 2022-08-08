SRCS		=	main.cpp Harl.Class.cpp
OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	Harl

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