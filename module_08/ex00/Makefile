# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/11/07 20:15:43 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		ex00
FLAGS =		-Wall -Wextra -Werror -g -std=c++98 -o $(NAME)
SRCS =		main.cpp 
HEADERS =	easyfind.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS) Makefile
	@$(CC) $(FLAGS) $(SRCS)
	@./$(NAME)
clean:
	rm -f $(NAME)