# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/22 17:05:28 by jeldora           #+#    #+#              #
#    Updated: 2020/10/23 02:23:43 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		PhoneBook
FLAGS =		-Wall -Wextra -Werror -o $(NAME)
SRCS =		main.cpp \
			add.cpp
HEADERS =	-Imainheader.hpp \
			-IContactClass.hpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS)

clean:
	rm -f $(NAME)