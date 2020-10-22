# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/22 17:05:28 by jeldora           #+#    #+#              #
#    Updated: 2020/10/22 22:05:37 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		PhoneBook
FLAGS =		-Wall -Wextra -Werror -o $(NAME)
SRCS =		ContactClass.cpp
HEADERS =	-Iphonebook.hpp \
			-IContactClass.hpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS)

clean:
	rm -f $(NAME)