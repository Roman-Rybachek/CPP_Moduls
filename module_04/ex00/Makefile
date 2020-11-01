# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/10/31 19:53:38 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		ex00
FLAGS =		-Wall -Wextra -Werror -std=c++98 -o $(NAME)
SRCS =		main.cpp \
			functions.cpp \
			Sorcerer.cpp \
			Victim.cpp \
			Peon.cpp \
			Other.cpp
HEADERS =	Sorcerer.hpp Victim.hpp Peon.hpp functions.hpp Other.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	@ $(CC) $(FLAGS) $(SRCS)
	@./ex00

clean:
	rm -f $(NAME)