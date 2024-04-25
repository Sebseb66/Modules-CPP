# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 15:17:46 by sfroidev          #+#    #+#              #
#    Updated: 2024/03/21 15:17:56 by sfroidev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Bureaucrat

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
