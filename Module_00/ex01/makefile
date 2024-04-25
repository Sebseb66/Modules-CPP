# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 12:46:19 by sfroidev          #+#    #+#              #
#    Updated: 2024/01/03 10:16:37 by sfroidev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC=g++

CFLAGS=-Wall -Werror -Wextra -std=c++98

SRC=Contact.cpp PhoneBook.cpp main.cpp

OBJ=$(SRC:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
		$(CC) -c $(CFLAGS) $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all