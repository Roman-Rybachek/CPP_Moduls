# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/10/31 22:53:33 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		ex01
FLAGS =		-Wall -Wextra -Werror -std=c++98 -o $(NAME)
SRCS =		main.cpp \
			AWeapon.cpp \
			PlasmaRifle.cpp \
			PowerFist.cpp
HEADERS =	AWeapon.hpp PlasmaRifle.hpp PowerFist.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS) Makefile
	@ $(CC) $(FLAGS) $(SRCS)
	@./$(NAME)

clean:
	rm -f $(NAME)