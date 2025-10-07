#include "push_swap.h"

static void    sort_3(t_stack **a)
{
    int one;
    int two;
    int three;

    one = (*a)->number;
    two = (*a)->next_node->number;
    three = (*a)->next_node->next_node->number;
    if (one < two && two < three)
        return ;
    else if (one > two && two < three && one < three)
        sa(a);
    else if (one > two && two > three)
    {
        sa(a);
        ra(a);
        ra(a);
    }
    else if (one > two && two < three && one > three)
        ra(a);
    else if (one < two && two > three && one < three)
    {
        sa(a);
        ra(a);
    }
    else if (one < two && two > three && one > three)
        ra(a); 
}

void small_stack_sort(t_stack **a)
{
    int size;

    size = stack_size(*a);
    if (size == 2)
    {
        if ((*a)->number > (*a)->next_node->number)
            sa(a);
    }
    else if (size == 3)
        sort_3(a);
}
