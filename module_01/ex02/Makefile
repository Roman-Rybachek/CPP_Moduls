# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/10/23 22:32:05 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		zombie
FLAGS =		-Wall -Wextra -Werror -o $(NAME)
SRCS =		Zombie.cpp \
			ZombieEvent.cpp \
			main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS)

clean:
	rm -f $(NAME)