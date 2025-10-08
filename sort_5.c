#include "push_swap.h"

static void sort_5_cont(t_stack **a, t_stack **b, int min_i)
{
    if (min_i == 1)
	{
		sa(a);
		pb(a, b);
	}
	else if (min_i == 2)
	{
		ra(a);
		ra(a);
		pb(a, b);
	}
	else if (min_i == 3)
	{
		ra(a);
		pb(a, b);
	}
	else if (min_i == 4)
	{
		ra(a);
		pb(a, b);
	}
}

void	sort_5(t_stack **a, t_stack **b)
{
	int min_i;

	while (stack_size(*a) > 3)
	{
		min_i = find_min_i(*a);
		if (min_i == 0)
			pb(a, b);
		sort_5_cont(a, b, min_i);
	}
	sort_3(a);
	pa(a, b);
	pa(a, b);
	if ((*a) && (*a)->next_node && (*a)->number > (*a)->next_node->number)
		sa(a);
}
