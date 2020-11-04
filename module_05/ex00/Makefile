# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/11/04 15:03:00 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		ex03
FLAGS =		-Wall -Wextra -Werror -g -std=c++98 -o $(NAME)
SRCS =		main.cpp \
			Bureaucrat.cpp
HEADERS =	

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS) Makefile
	@$(CC) $(FLAGS) $(SRCS)
	@./$(NAME)

clean:
	rm -f $(NAME)