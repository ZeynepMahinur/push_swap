#include "push_swap.h"

int main(int argc, char *argv[])
{
    t_stack *stack_a;
    t_stack *stack_b;
    t_stack *tmp;

    stack_a = NULL;
    stack_b = NULL;
    if (argc < 2)
        return (0);
    fill_a(&stack_a, argc, argv);
    tmp = stack_a;
    while (tmp)
        tmp = tmp->next_node;
    index_stack(stack_a);
    radix_sort(&stack_a, &stack_b);
    stack_clear(&stack_a);
    stack_clear(&stack_b);
    return (0);
}
