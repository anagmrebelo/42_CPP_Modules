# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 18:20:34 by arebelo           #+#    #+#              #
#    Updated: 2023/04/02 22:49:28 by anarebelo        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= 	main.cpp

OBJS	= ${SRCS:.cpp=.o}
NAME	= brain

CC		= c++
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all:		${NAME}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
