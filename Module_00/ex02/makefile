# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 08:12:43 by sfroidev          #+#    #+#              #
#    Updated: 2024/01/08 08:12:58 by sfroidev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=g++

CFLAGS=-Wall -Wextra -Werror -std=c++98

EXEC=account

SRC=Account.cpp tests.cpp

OBJ=$(SRC:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all
