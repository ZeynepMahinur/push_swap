/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarikan <zarikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:34:28 by zarikan           #+#    #+#             */
/*   Updated: 2025/10/18 13:34:28 by zarikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*first;

	if (!*stack_b || !(*stack_b)->next_node)
		return ;
	first = *stack_b;
	*stack_b = (*stack_b)->next_node;
	tmp = stack_last(*stack_b);
	if (tmp)
		tmp->next_node = first;
	first->next_node = NULL;
	ft_printf("rb\n");
}

void	rrb(t_stack **stack_b)
{
	t_stack	*last;
	t_stack	*tmp;

	if (!*stack_b || !(*stack_b)->next_node)
		return ;
	last = *stack_b;
	tmp = NULL;
	while (last->next_node)
	{
		tmp = last;
		last = last->next_node;
	}
	if (tmp)
		tmp->next_node = NULL;
	last->next_node = *stack_b;
	*stack_b = last;
	ft_printf("rrb\n");
}

void	rra(t_stack **stack_a)
{
	t_stack	*last;
	t_stack	*tmp;

	if (!*stack_a || !(*stack_a)->next_node)
		return ;
	last = *stack_a;
	tmp = NULL;
	while (last->next_node)
	{
		tmp = last;
		last = last->next_node;
	}
	if (tmp)
		tmp->next_node = NULL;
	last->next_node = *stack_a;
	*stack_a = last;
	ft_printf("rra\n");
}
