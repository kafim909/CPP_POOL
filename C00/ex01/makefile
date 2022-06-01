# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 14:56:34 by mtournay          #+#    #+#              #
#    Updated: 2022/06/01 17:21:47 by mtournay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	Contact.cpp Phonebook.cpp main.cpp 
OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	Phonebook

CC					=	clang++
CFLAGS				=	-Wall -Wextra -Werror\

all:		$(NAME)

$(NAME):	${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
				@rm -f ${OBJS}

fclean:		clean
				@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re