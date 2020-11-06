# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/11/04 16:43:51 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		ex01
FLAGS =		-Wall -Wextra -Werror -g -std=c++98 -o $(NAME)
SRCS =		main.cpp \
			Bureaucrat.cpp \
			Form.cpp
HEADERS =	Bureaucrat.hpp Form.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS) Makefile
	@$(CC) $(FLAGS) $(SRCS)
	@./$(NAME)

clean:
	rm -f $(NAME)