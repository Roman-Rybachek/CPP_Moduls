# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/10/25 02:11:37 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		ex06
FLAGS =		-Wall -Wextra -Werror -o $(NAME)
SRCS =		HumanA.cpp \
			HumanB.cpp \
			main.cpp \
			Weapon.cpp
HEADER =		Weapon.hpp \
			HumanA.hpp \
			HumanB.hpp
all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	$(CC) $(FLAGS) $(SRCS)

clean:
	rm -f $(NAME)