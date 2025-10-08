CC = cc

CFLAGS = -Wall -Wextra -Werror -g -I.

LIBFT = ./libft/libft.a
PRINTF = ./printf/libftprintf.a

SRCS = fill_a.c free_stack_utils.c index.c push_swap.c radix_sort.c stack_operations.c stack_utils.c \
ft_atoi_safe.c is_duplicate.c small_stack_sort.c find_min_i.c sort_5.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)

$(LIBFT):
	make -C ./libft

$(PRINTF):
	make -C ./printf

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L./libft -lft -L./printf -lftprintf

clean:
	rm -f $(OBJS)
	make -C ./libft clean
	make -C ./printf clean

fclean: clean
	rm -f $(NAME)
	make -C ./libft fclean
	make -C ./printf fclean

re: fclean all

.PHONY: all clean fclean re 