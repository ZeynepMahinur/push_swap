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
    t_param p;

    p.bit = 0;
    p.max_i = max_index(*a);
    p.max_bit = 0;
    while ((p.max_i >> p.max_bit) != 0)
        p.max_bit++;
    while (p.bit < p.max_bit)
    {
        p.i = 0;
        p.len = stack_size(*a);
        while (p.i < p.len)
        {
            if ((((*a)->index >> p.bit) & 1) == 0)
                pb(a, b);
            else
                ra(a);
            p.i++;
        }
        while (*b)
            pa(a, b);
        p.bit++;
    }
}
