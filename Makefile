CC = cc

CFLAGS = -Wall -Wextra -Werror -g -I.

LIBFT = ../push_swap_folder/libft/libft.a
PRINTF = ../push_swap_folder/printf/libftprintf.a

SRCS =	fill_a.c free_stack_utils.c index.c push_swap.c is_duplicate.c \
		radix_sort.c stack_operations.c stack_utils.c ft_atoi_safe.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)

$(LIBFT):
	make -C ../push_swap_folder/libft

$(PRINTF):
	make -C ../push_swap_folder/printf

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L../push_swap_folder/libft -lft -L../push_swap_folder/printf -lftprintf

clean:
	rm -f $(OBJS)
	make -C ../push_swap_folder/libft clean
	make -C ../push_swap_folder/printf clean

fclean: clean
	rm -f $(NAME)
	make -C ../push_swap_folder/libft fclean
	make -C ../push_swap_folder/printf fclean

re: fclean all

.PHONY: all clean fclean re 