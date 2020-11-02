# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/11/02 18:21:27 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		ex01
FLAGS =		-Wall -Wextra -Werror -std=c++98 -o $(NAME)
SRCS =		main.cpp \
			AWeapon.cpp \
			PlasmaRifle.cpp \
			PowerFist.cpp \
			Enemy.cpp \
			SuperMutant.cpp \
			RedScorpion.cpp \
			Character.cpp
HEADERS =	AWeapon.hpp PlasmaRifle.hpp PowerFist.hpp Enemy.hpp SuperMutant.hpp RedScorpion.hpp Character.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS) Makefile
	@$(CC) $(FLAGS) $(SRCS)
	@./$(NAME)

clean:
	rm -f $(NAME)