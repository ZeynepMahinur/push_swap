#include "push_swap.h"

int find_min_i(t_stack *a)
{
	int	min;
	int	i;
	int index;
	t_stack *tmp;

	min = a->number;
	i = 0;
	index = 0;
	tmp = a;
	while (tmp)
	{
		if (tmp->number < min)
		{
			min = tmp->number;
			index = i;
		}
		tmp = tmp->next_node;
		i++;
	}
	return (index);
}