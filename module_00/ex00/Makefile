# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/22 17:05:28 by jeldora           #+#    #+#              #
#    Updated: 2020/10/22 19:59:35 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
NAME = megaphone
FLAGS = -Wall -Wextra -Werror -o $(NAME)
SRCS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS)

clean:
	rm -f $(NAME)