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
    pb(&stack_a, &stack_b);
    pb(&stack_a, &stack_b);
    ft_printf("after pb stack_a:\n");
    tmp = stack_a;
    while (tmp)
    {
        ft_printf("%d ", tmp->number);
        tmp = tmp->next_node;
    }
    ft_printf("\n");
    ft_printf("after pb stack_b:\n");
    tmp = stack_b;
    while (tmp)
    {
        ft_printf("%d ", tmp->number);
        tmp = tmp->next_node;
    }
    ft_printf("\n");
    pa(&stack_a, &stack_b);
    ft_printf("after pa stack_b:\n");
    tmp = stack_b;
    while (tmp)
    {
        ft_printf("%d ", tmp->number);
        tmp = tmp->next_node;
    }
    ft_printf("\n");
    ft_printf("after pa stack_a:\n");
    tmp = stack_a;
    while (tmp)
    {
        ft_printf("%d ", tmp->number);
        tmp = tmp->next_node;
    }
    ft_printf("\n");
    return (0);
}
