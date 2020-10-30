# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/10/30 15:54:27 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		ex02
FLAGS =		-Wall -Wextra -Werror -std=c++98 -o $(NAME)
SRCS =		main.cpp \
			FragTrap.cpp \
			ScavTrap.cpp \
			ClapTrap.cpp
HEADERS =	FragTrap.hpp ScavTrap.hpp ClapTrap.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CC) $(FLAGS) $(SRCS)

clean:
	rm -f $(NAME)