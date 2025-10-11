/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarikan <zarikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 14:15:28 by zarikan           #+#    #+#             */
/*   Updated: 2025/10/11 14:15:29 by zarikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_i(t_stack *a)
{
	int		min;
	int		i;
	int		index;
	t_stack	*tmp;

	min = a->number;
	i = 0;
	index = 0;
	tmp = a;
	while (tmp)
	{
		if (tmp->number < min)
		{
			min = tmp->number;
			index = i;
		}
		tmp = tmp->next_node;
		i++;
	}
	return (index);
}
