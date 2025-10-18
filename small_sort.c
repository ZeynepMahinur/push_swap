/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarikan <zarikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:36:45 by zarikan           #+#    #+#             */
/*   Updated: 2025/10/18 13:36:46 by zarikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack **a, t_stack **b)
{
	int	min_i;

	while (stack_size(*a) > 3)
	{
		min_i = find_min_i(*a);
		if (min_i == 0)
			pb(a, b);
		else if (min_i <= stack_size(*a) / 2)
			while (min_i-- > 0)
				ra(a);
		else
		{
			min_i = stack_size(*a) - min_i;
			while (min_i-- > 0)
				rra(a);
		}
		if ((*a) && (*a)->index == 0)
			pb(a, b);
	}
	sort_3(a);
	while (*b)
		pa(a, b);
}
