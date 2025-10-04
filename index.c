#include "push_swap.h"

void    index_stack(t_stack *stack)
{
    t_stack *stack_start;
    t_stack *tmp;
    int i;

    stack_start = stack;
    while (stack_start)
    {
        i = 0;
        tmp = stack;
        while(tmp)
        {
            if (tmp->number < stack_start->number)
                i++;
            tmp = tmp->next_node;
        }
        stack_start->index = i;
        stack_start = stack_start->next_node;
    }
}
