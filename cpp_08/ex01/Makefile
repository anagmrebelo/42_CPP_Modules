# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 18:20:34 by arebelo           #+#    #+#              #
#    Updated: 2022/09/06 17:51:37 by jpalma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	 	= main.cpp\
		  Span.cpp

OBJS		= ${SRCS:.cpp=.o}
NAME		= ex01

INCLUDES 	= Span.hpp\

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

all:		${NAME}

${NAME}:	${OBJS} ${INCLUDES}
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
