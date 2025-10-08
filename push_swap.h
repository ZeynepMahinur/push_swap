/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarikan <zarikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:33:20 by zarikan           #+#    #+#             */
/*   Updated: 2025/10/06 15:42:03 by zarikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./printf/ft_printf.h"

typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next_node;
}		t_stack;

typedef struct s_param
{
	int	max_i;
	int	max_bit;
	int	bit;
	int	i;
	int	len;
}		t_param;

t_stack	*stack_new(int value);
void	stack_add_back(t_stack **stack, t_stack *new);
void	stack_add_front(t_stack **stack, t_stack *new);
t_stack	*stack_last(t_stack *stack);
int		stack_size(t_stack *stack);
void	stack_clear(t_stack **stack);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	fill_a(t_stack **stack_a, int argc, char *argv[]);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	index_stack(t_stack *stack);
void	radix_sort(t_stack **a, t_stack **b);
int		is_duplicate(char **args, int size);
int		ft_atoi_safe(char *str, int *out);
void	small_stack_sort(t_stack **a, t_stack **b);
void	sa(t_stack **stack_a);
int		find_min_i(t_stack *a);
void	sort_5(t_stack **a, t_stack **b);
void    sort_3(t_stack **a);

#endif
