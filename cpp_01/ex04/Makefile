# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 18:20:34 by arebelo           #+#    #+#              #
#    Updated: 2022/06/29 21:53:00 by arebelo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= main.cpp

OBJS	= ${SRCS:.cpp=.o}
NAME	= replace

INCLUDES = 	

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all:		${NAME}

${NAME}:	${OBJS} ${INCLUDES}
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
