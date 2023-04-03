# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 21:15:01 by arebelo           #+#    #+#              #
#    Updated: 2023/04/03 15:54:29 by arebelo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME
# **************************************************************************** #
BINARY				= phonebook

# FILES
# **************************************************************************** #
SRCS				= 	Contact.cpp\
						Phonebook.cpp\
						main.cpp

OBJS				=${addprefix ${OBJS_DIR}, ${SRCS:.cpp=.o}}
DEPS				=${addprefix ${OBJS_DIR}, ${SRCS:.cpp=.d}}

# DIRECTORY
# **************************************************************************** #
OBJS_DIR			= objs/
SRCS_DIR			= 

# LIBRARIES
# **************************************************************************** #
INCLUDE				= -I include

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

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.cpp
					@mkdir -p $(dir $@)
					$(CC) $(CFLAGS) $(DEPFLAGS) $(INCLUDE) $< -o $@

$(BINARY): $(OBJS)
					$(LINK) $(CFLAGS) $(INCLUDE) -o $@ $^ $(LIBS)

clean:
					@$(RM) $(OBJS_DIR)

fclean: clean
					@$(RM) $(BINARY)

re: fclean all

-include ${DEPS}

.PHONY: all bonus clean fclean re




#INCLUDES = 	Contact.class.hpp\
			ex01.hpp
