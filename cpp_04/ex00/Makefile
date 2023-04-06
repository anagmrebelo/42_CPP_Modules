# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarebelo <anarebelo@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 18:20:34 by arebelo           #+#    #+#              #
#    Updated: 2023/04/06 09:58:22 by anarebelo        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME
# **************************************************************************** #
BINARY				= animal

# FILES
# **************************************************************************** #
SRCS				= Animal.cpp\
					Dog.cpp\
					Cat.cpp\
					WrongCat.cpp\
					WrongAnimal.cpp\
					main.cpp

MK					= Makefile

OBJS				=${addprefix ${OBJS_DIR}, ${SRCS:.cpp=.o}}
DEPS				=${addprefix ${OBJS_DIR}, ${SRCS:.cpp=.d}}


# DIRECTORY
# **************************************************************************** #
OBJS_DIR			= objs/
SRCS_DIR			= srcs/

# COMPILATION
# **************************************************************************** #
LINK				= c++
CC					= c++ -c
DEPFLAGS			= -MMD -MP
CFLAGS				= -Wall -Wextra -Werror 
RM					= rm -rf

# RULES
# **************************************************************************** #
all:	$(BINARY)

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.cpp $(MK)
					@mkdir -p $(dir $@)
					$(CC) $(CFLAGS) $(DEPFLAGS) $(INCLUDE) $< -o $@

$(BINARY): $(OBJS)
					$(LINK) $(CFLAGS) -o $@ $^ $(LIBS)

clean:
					@$(RM) $(OBJS_DIR)

fclean: clean
					@$(RM) $(BINARY)

re: fclean all

-include ${DEPS}

.PHONY: all bonus clean fclean re
