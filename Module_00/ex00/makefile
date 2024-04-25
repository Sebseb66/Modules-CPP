# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 13:45:12 by sfroidev          #+#    #+#              #
#    Updated: 2023/12/21 14:45:15 by sfroidev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=g++

CFLAGS=-Wall -Wextra -Werror -std=c++98

EXEC=megaphone

SRC=megaphone.cpp

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
