#include "push_swap.h"

static void rb(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*first;

	if (!*stack_b || !*stack_b || !(*stack_b)->next_node)
		return ;
	first = *stack_b;
	*stack_b = (*stack_b)->next_node;
	tmp = stack_last(*stack_b);
	if (tmp)
		tmp->next_node = first;
	first->next_node = NULL;
	ft_printf("rb\n");
}

void    chunk_sort(t_stack **stack_a, t_stack **stack_b)
{
    int size;
    int max;
    int chunk_size;
    int chunk_count;

    index_stack(*stack_a);
    size = stack_size(*stack_a);
    if (size <= 5)
        chunk_count = 1;
    else if (size <= 10)
        chunk_count = 2;
    else
        chunk_count = 6;
    chunk_size = size / chunk_count;
    max = chunk_size;
    while (*stack_a)
    {
        if (size <= 5 && stack_size(*stack_a) <= 3)
        {
            sort_3(stack_a);
            break;
        }
        if ((*stack_a)->index < max)
        {
            pb(stack_a, stack_b);
            if ((*stack_b)->index < max - (chunk_size / 2))
                rb(stack_b);
        }
        else
            ra(stack_a);
        if (stack_size(*stack_b) >= max)
            max += chunk_size;
    }
    while (*stack_b)
    {
        if ((*stack_b)->index != max_index(*stack_b))
            rb(stack_b);
        pa(stack_a, stack_b);
    }
    if ((*stack_a)->next_node && (*stack_a)->number > (*stack_a)->next_node->number)
        sa(stack_a);
}