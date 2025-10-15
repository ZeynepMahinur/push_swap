#include "push_swap.h"

static int i_of_max_i(t_stack *stack)
{
    int max_i;
    int max_num;
    int i;

    max_num = stack->index;
    max_i = 0;
    i = 0;
    while (stack)
    {
        if (stack->index > max_num)
        {
            max_num = stack->index;
            max_i = i;
        }
        stack = stack->next_node;
        i++;
    }
    return (max_i);
}

static void push_b(t_stack **a, t_stack **b, int chunk_size, int size)
{
    int limit;

    limit = chunk_size;
    while (*a)
    {
        if ((*a)->index < limit)
        {
            pb(a, b);
            if ((*b)->index < limit - (chunk_size / 2))
                rb(b);
        }
        else
            ra(a);
        if (stack_size(*b) >= limit && limit < size)
        {
            limit += chunk_size;
            if (limit > size)
                limit = size;
        }
    }
}

static void push_a(t_stack **a, t_stack **b)
{
    int max_num;
    int pos;

    while (*b)
    {
        max_num = max_index(*b);
        pos = i_of_max_i(*b);
        if ((*b)->index == max_num)
            pa(a, b);
        else if (pos <= stack_size(*b) / 2)
            rb(b);
        else
            rrb(b);
    }
}

void chunk_sort(t_stack **a, t_stack **b)
{
    int size;
    int chunk_size;

    size = stack_size(*a);
    if (size <= 5)
    {
        if (size == 2 && (*a)->number > (*a)->next_node->number)
            sa(a);
        else if (size == 3)
            sort_3(a);
        else
            sort_5(a, b);
        return ;
    }
    if (size <= 50)
        chunk_size = 6;
    push_b(a, b, chunk_size, size);
    push_a(a, b);
}

