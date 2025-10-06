/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarikan <zarikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:46:57 by zarikan           #+#    #+#             */
/*   Updated: 2025/10/06 15:46:58 by zarikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!stack_a || !stack_b)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next_node;
	tmp->next_node = *stack_b;
	*stack_b = tmp;
	ft_printf("pb\n");
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!stack_a || !stack_b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next_node;
	tmp->next_node = *stack_a;
	*stack_a = tmp;
	ft_printf("pa\n");
}

void	ra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*first;

	if (!*stack_a || !(*stack_a)->next_node)
		return ;
	first = *stack_a;
	*stack_a = (*stack_a)->next_node;
	tmp = stack_last(*stack_a);
	tmp->next_node = first;
	first->next_node = NULL;
	ft_printf("ra\n");
}
