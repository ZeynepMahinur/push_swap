#include "push_swap.h"

static void	sort_3_cont(t_stack **a)
{
	int one;
	int two;
	int three;

	if (!(*a) || !(*a)->next_node || !(*a)->next_node->next_node)
		return;
	one = (*a)->number;
	two = (*a)->next_node->number;
	three = (*a)->next_node->next_node->number;
	if (one > two && two < three && one > three)
		ra(a);
	else if (one < two && two > three && one < three)
	{
		sa(a);
		ra(a);
	}
	else if (one < two && two > three && one > three)
	{
		ra(a);
		ra(a);
	}
}

static void sort_3_cont_2(t_stack **a)
{
	int one;
	int two;
	int three;

	if (!(*a) || !(*a)->next_node || !(*a)->next_node->next_node)
		return;
	one = (*a)->number;
	two = (*a)->next_node->number;
	three = (*a)->next_node->next_node->number;
	if (one > two && two < three && one < three)
		sa(a);
	else if (one > two && two > three)
	{
		sa(a);
		ra(a);
		ra(a);
	}
}

void    sort_3(t_stack **a)
{
	int one;
	int two;
	int three;
	int	size;

	size = stack_size(*a);
	if (size < 2)
		return ;
	else if (size == 2)
	{
		if ((*a) && (*a)->next_node && (*a)->number > (*a)->next_node->number)
			sa(a);
		return ;
	}
	if (!(*a) || !(*a)->next_node || !(*a)->next_node->number)
		return;
	one = (*a)->number;
	two = (*a)->next_node->number;
	three = (*a)->next_node->next_node->number;
	if (one < two && two < three)
		return ;
	sort_3_cont_2(a);
	sort_3_cont(a);
}

void small_stack_sort(t_stack **a, t_stack **b)
{
    int size;

    size = stack_size(*a);
    if (size == 2)
    {
        if ((*a) && (*a)->next_node && (*a)->number > (*a)->next_node->number)
            sa(a);
    }
    else if (size == 3)
        sort_3(a);
    else if (size <= 5)
		sort_5(a, b);
}
