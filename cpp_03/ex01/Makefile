# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 18:20:34 by arebelo           #+#    #+#              #
#    Updated: 2022/07/06 13:30:33 by arebelo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= ClapTrap.cpp\
		  ScavTrap.cpp\
		  main.cpp

OBJS	= ${SRCS:.cpp=.o}
NAME	= ScavTrap

INCLUDES =	ClapTrap.hpp\
			ScavTrap.hpp

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
