# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 16:23:00 by mtournay          #+#    #+#              #
#    Updated: 2022/06/01 13:36:15 by mtournay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

NAME		=	megaphone

CC					=	clang++
CFLAGS				=	-Wall -Wextra -Werror \

all:		$(NAME)

$(NAME):	${OBJS}
				${CC} ${CFLAGS} -o ${NAME} ${OBJS}
clean:
				@rm -f ${OBJS}

fclean:		clean
				@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
