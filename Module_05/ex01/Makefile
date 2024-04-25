# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 16:00:16 by sfroidev          #+#    #+#              #
#    Updated: 2024/03/21 16:02:46 by sfroidev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

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