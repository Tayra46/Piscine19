NAME = bsq

SRC = src/find_bsq.c src/ft_atoi.c src/ft_get_max_x.c src/ft_get_max_y.c src/ft_get_modifiable_coord.c src/ft_putchar.c src/ft_putstr.c src/is_valid_file2.c src/is_valid_file.c src/main.c src/place_square.c src/print_map.c src/read_map.c src/read_standart_input.c src/ft_strjoin.c src/ft_strlen.c

INCLUDE = -I ./includes

CC = gcc

CFLAGS = -Werror -Wextra -Wall -g

OBJS = $(SRC:c=o)

all : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS) :
	$(CC) $(CFLAGS) -c $(INCLUDE) $(@:.o=.c) -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
