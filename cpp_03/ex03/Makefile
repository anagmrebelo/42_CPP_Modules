# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 18:20:34 by arebelo           #+#    #+#              #
#    Updated: 2022/07/06 14:26:59 by arebelo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= ClapTrap.cpp\
		  ScavTrap.cpp\
		  FragTrap.cpp\
		  DiamondTrap.cpp\
		  main.cpp

OBJS	= ${SRCS:.cpp=.o}
NAME	= DiamondTrap

INCLUDES =	ClapTrap.hpp\
			ScavTrap.hpp\
			FragTrap.hpp\
			DiamondTrap.hpp

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -Wshadow -Wno-shadow
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
