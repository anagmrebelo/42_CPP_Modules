# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 18:20:34 by arebelo           #+#    #+#              #
#    Updated: 2022/06/29 16:51:37 by arebelo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= Karen.cpp\
		  main.cpp

OBJS	= ${SRCS:.cpp=.o}
NAME	= karen

INCLUDES =	Karen.hpp

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
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
