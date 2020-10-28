# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/10/28 10:22:43 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		ex00
FLAGS =		-Wall -Wextra -Werror -std=c++98 -o $(NAME)
SRCS =		main.cpp \
			FragTrap.cpp \
			ScavTrap.cpp
HEADERS =	FragTrap.hpp ScavTrap.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CC) $(FLAGS) $(SRCS)

clean:
	rm -f $(NAME)