CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
NAME	:= libft.a
SRCS	:= $(wildcard *.c)
OBJS	:= $(patsubst %.c, %.o, $(SRCS))

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(OBJS): %.o: %.c libft.h
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	ar cr $(NAME) $(OBJS)
