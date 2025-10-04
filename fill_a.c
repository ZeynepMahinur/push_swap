#include "push_swap.h"

int ft_isspace_safe(char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

int ft_isdigit_safe(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int ft_atoi_safe(char *str, int *out)
{
    int i = 0;
    long res = 0;
    int s = 1;

    while (ft_isspace_safe(str[i]))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            s = -1;
        i++;
    }
    if (!ft_isdigit_safe(str[i]))
        return (0);
    while (ft_isdigit_safe(str[i]))
    {
        res = (res * 10) + (str[i] - '0');
        if ((s == 1 && res > 2147483647) || (s == -1 && -res < -2147483648))
            return (0);
        i++;
    }
    if (str[i] != '\0')
        return (0);
    *out = (int)(res * s);
    return (1);
}

void    fill_a(t_stack **stack_a, int argc, char *argv[])
{
    int     i;
    int     number;
    t_stack *new_node;

    i = 1;
    while (i < argc)
    {
        if (!ft_atoi_safe(argv[i], &number))
        {
            stack_clear(stack_a);
            write (2, "Error\n", 6);
            exit(1);
        }
        new_node = stack_new(number);
        if (!new_node)
            exit(1);
        stack_add_back(stack_a, new_node);
        i++;
    }
}
