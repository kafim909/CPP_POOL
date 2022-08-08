# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 14:56:34 by mtournay          #+#    #+#              #
#    Updated: 2022/06/27 15:31:39 by mtournay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	Contact.cpp Phonebook.cpp main.cpp 
OBJS		=	$(SRCS:%.cpp=%.o)

NAME		=	Phonebook

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