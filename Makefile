# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 15:43:41 by aait-oma          #+#    #+#              #
#    Updated: 2021/11/05 18:52:20 by aait-oma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INC = libft.h
SRC = *.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS:.c=.o)
	$(CC) $(CFLAGS) -c $(SRC) -I $(INC)
	ar rc $(NAME) *.o
clean:
	rm -rf *.o
fclean:
	rm -rf *.o $(NAME)
re: fclean all