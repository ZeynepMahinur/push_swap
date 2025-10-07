/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarikan <zarikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:29:01 by zarikan           #+#    #+#             */
/*   Updated: 2025/10/07 17:57:11 by zarikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	dup_check(t_stack **stack_a, char **argv)
{
	int		size;
	
	size = stack_size(*stack_a);
	if (is_duplicate(argv + 1, size))
	{
		stack_clear(stack_a);
		write (2, "Error\n", 6);
		exit(1);	
	}
}


void	fill_a(t_stack **stack_a, int argc, char *argv[])
{
	int		i;
	int		number;
	t_stack	*new_node;
	
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
	dup_check(stack_a, argv);
}
