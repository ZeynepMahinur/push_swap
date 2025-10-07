/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarikan <zarikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:24:30 by zarikan           #+#    #+#             */
/*   Updated: 2025/10/06 15:26:53 by zarikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void free_split(char **arr)
{
	int i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

void	check_args(int argc, char *argv[], t_stack **stack_a)
{
	char **split_args;
	int i;

	if (argc == 2)
	{
		split_args = ft_split(argv[1], ' ');
		if (!split_args)
			exit (1);
		i = 0;
		while(split_args[i])
			i++;
		fill_a(stack_a, i + 1, split_args - 1);
		free_split(split_args);
	}
	else
		fill_a(stack_a, argc, argv);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	check_args(argc, argv, &stack_a);
	index_stack(stack_a);
	radix_sort(&stack_a, &stack_b);
	stack_clear(&stack_a);
	stack_clear(&stack_b);
	return (0);
}
