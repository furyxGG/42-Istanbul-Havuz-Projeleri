CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = \
	check_map.c \
	find_solution.c \
	ft_atoi.c \
	ft_check_chars.c \
	main.c \
	print_map.c \
	print_scrn.c \
	print_solution.c \
	read_map.c \
	read_stdin.c \
	ft_get_fline.c

OBJS = $(SRCS:.c=.o)

NAME = bsq

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c BSQLIB.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
