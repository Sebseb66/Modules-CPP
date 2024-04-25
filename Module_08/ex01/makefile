# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 17:15:03 by sfroidev          #+#    #+#              #
#    Updated: 2024/04/02 17:16:41 by sfroidev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)


re: fclean all
