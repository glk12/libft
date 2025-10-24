NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
