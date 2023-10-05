# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 18:20:34 by arebelo           #+#    #+#              #
#    Updated: 2023/10/05 14:40:12 by arebelo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# NAME
# **************************************************************************** #
BINARY				= a.out


# FILES
# **************************************************************************** #
SRCS 				= main.cpp\
					Serializer.cpp

MK					= Makefile

OBJS				=${addprefix ${OBJS_DIR}, ${SRCS:.cpp=.o}}
DEPS				=${addprefix ${OBJS_DIR}, ${SRCS:.cpp=.d}}


# DIRECTORY
# **************************************************************************** #
OBJS_DIR			= objs/
SRCS_DIR			= srcs/
INC_DIR				= inc


# COMPILATION
# **************************************************************************** #
LINK				= c++
CC					= c++ -c
DEPFLAGS			= -MMD -MP
CFLAGS				= -Wall -Wextra -Werror -std=c++98
RM					= rm -rf
INCLUDE				= -I $(INC_DIR)


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

