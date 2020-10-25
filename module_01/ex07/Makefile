# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/10/25 03:43:01 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		ex07
FLAGS =		-Wall -Wextra -Werror -o $(NAME)
SRCS =		main.cpp

all: $(NAME)

$(NAME): $(SRCS) 
	$(CC) $(FLAGS) $(SRCS)

clean:
	rm -f $(NAME)