#include "push_swap.h"

void    fill_a(t_stack **stack_a, int argc, char *argv[])
{
    int     i;
    int     number;
    t_stack *new_node;

    i = 1;
    while (i < argc)
    {
        number = ft_atoi(argv[i]);
        new_node = stack_new(number);
        if (!new_node)
            exit(1);
        stack_add_back(stack_a, new_node);
        i++;
    }
}
