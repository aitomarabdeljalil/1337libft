# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 15:43:41 by aait-oma          #+#    #+#              #
#    Updated: 2021/11/04 18:02:12 by aait-oma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SOURCES = $(wildcard *.c)
OBJECTS = $(patsubst %.c,%.o, $(SOURCES))

$(OBJECTS): %.o: %.c libft.h
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJECTS)
	ar cr $(NAME) $(OBJECTS)

.PHONY: all clean

all: $(NAME)
clean:
	rm -rf *.o