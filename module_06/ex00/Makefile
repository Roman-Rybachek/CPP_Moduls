# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/11/06 12:38:34 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		convert
FLAGS =		-Wall -Wextra -Werror -g -std=c++98 -o $(NAME)
SRCS =		main.cpp 
#HEADERS =	

all: $(NAME)

$(NAME): $(SRCS) Makefile
	@$(CC) $(FLAGS) $(SRCS)

clean:
	rm -f $(NAME)