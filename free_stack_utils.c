#include "push_swap.h"

void    stack_clear(t_stack **stack)
{
    t_stack *tmp;

    while (*stack)
    {
        tmp = (*stack)->next_node;
        free(*stack);
        *stack = tmp;
    }
}
