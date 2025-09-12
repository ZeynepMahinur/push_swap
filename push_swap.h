#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "./libft/libft.h"
#include "./printf/ft_printf.h"

typedef struct s_stack
{
    int     number;
    int     index;
    struct s_stack *next_node;
}              t_stack;

t_stack *stack_new(int value);
void    stack_add_back(t_stack **stack, t_stack *new);
void    stack_add_front(t_stack **stack, t_stack *new);
t_stack *stack_last(t_stack *stack);
int stack_size(t_stack *stack);
void    stack_clear(t_stack **stack);
void    pb(t_stack **stack_a, t_stack **stack_b);
void    fill_a(t_stack **stack_a, int argc, char *argv[]);
void    pa(t_stack **stack_a, t_stack **stack_b);
void    ra(t_stack **stack_a);


#endif
