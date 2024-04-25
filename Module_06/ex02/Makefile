# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 11:15:30 by sfroidev          #+#    #+#              #
#    Updated: 2024/04/04 09:11:19 by sfroidev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identifyRealType

CC=c++

CFLAGS=-Wall -Wextra -Werror -std=c++98

SRC=$(wildcard *.cpp)

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all