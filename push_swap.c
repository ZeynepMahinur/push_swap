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
    ft_printf("Start stack_a:\n");
    tmp = stack_a;
    while (tmp)
    {
        ft_printf("%d ", tmp->number);
        tmp = tmp->next_node;
    }
    ft_printf("\n");
    index_stack(stack_a);
    tmp = stack_a;
    while (tmp)
    {
        ft_printf("num: %d\n | index: %d\n", tmp->number, tmp->index);
        tmp = tmp->next_node;
    }
    ft_printf("\n");
    radix_sort(&stack_a, &stack_b);  // radix sort uygula

    ft_printf("After radix_sort stack_a:\n");
    tmp = stack_a;
    while (tmp)
    {
        ft_printf("%d ", tmp->number);
        tmp = tmp->next_node;
    }
    ft_printf("\n");
    ft_printf("After radix_sort stack_b:\n");
    tmp = stack_b;
    while (tmp)
    {
        ft_printf("%d ", tmp->number);
        tmp = tmp->next_node;
    }
    if (tmp == 0)
        ft_printf("0\n");
    return (0);
}