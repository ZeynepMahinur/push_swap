#include "push_swap.h"

static int    max_index(t_stack *stack)
{
    int max_i;
    t_stack *tmp;

    max_i = 0;
    tmp = stack;
    while (tmp)
    {
        if (tmp->index > max_i)
            max_i = tmp->index;
        tmp = tmp->next_node;
    }
    return (max_i);
}

void    radix_sort(t_stack **a, t_stack **b)
{
    int max_i;
    int max_bit;
    int bit;
    int i;
    int len;
    int j;

    bit = 0;
    max_i = max_index(*a);
    max_bit = 0;
    while ((max_i >> max_bit) != 0)
        max_bit++;
    while (bit < max_bit)
    {
        i = 0;
        len = stack_size(*a);
        while (i < len)
        {
            if ((((*a)->index >> bit) & 1) == 0)
                pb(a, b);
            else
                ra(a);
            i++;
        }
        while (*b)
            pa(a, b);
        bit++;
    }
}
