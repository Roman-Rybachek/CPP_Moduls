# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 20:20:36 by jeldora           #+#    #+#              #
#    Updated: 2020/11/05 19:22:56 by jeldora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++
NAME =		ex02
FLAGS =		-Wall -Wextra -Werror -g -std=c++98 -o $(NAME)
SRCS =		main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp
HEADERS =	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.cpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS) Makefile
	@$(CC) $(FLAGS) $(SRCS)
	@./$(NAME)

clean:
	rm -f $(NAME)