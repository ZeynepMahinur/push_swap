#include "push_swap.h"

t_stack *stack_new(int value)
{
    t_stack *node;

    node = malloc(sizeof(t_stack));
    if (!node)
        return (NULL);
    node->number = value;
    node->index = -1; 
    node->next_node = NULL;
    return (node);
}

void    stack_add_back(t_stack **stack, t_stack *new)
{
    t_stack *last;

    if (!stack || !new)
        return;
    if (!*stack)
    {
        *stack = new;
        return;
    }
    last = *stack;
    while (last->next_node)
        last = last->next_node;
    last->next_node = new;
}
void    stack_add_front(t_stack **stack, t_stack *new)
{
    if (!stack || !new)
        return;
    new->next_node = *stack;
    *stack = new;
}

t_stack *stack_last(t_stack *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next_node)
        stack = stack->next_node;
    return (stack);
}


int stack_size(t_stack *stack)
{
    int i = 0;

    while (stack)
    {
        stack = stack->next_node;
        i++;
    }
    return (i);
}
