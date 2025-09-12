#include "push_swap.h"

void    pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;

    if (!stack_a || !stack_b)
        return ;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next_node;
    tmp->next_node = *stack_b;
    *stack_b = tmp;
    ft_printf("pb\n");
}