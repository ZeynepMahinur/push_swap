/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarikan <zarikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:24:30 by zarikan           #+#    #+#             */
/*   Updated: 2025/10/07 20:31:29 by zarikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

static void	check_split(char **arr)
{
	if (!arr[0])
	{
		write (2, "Error\n", 7);
		exit (1);
	}
}

void	check_args(int argc, char *argv[], t_stack **stack_a)
{
	char	**split_args;
	int		i;

	if (argc == 2)
	{
		split_args = ft_split(argv[1], ' ');
		check_split(split_args);
		i = 0;
		while (split_args[i])
			i++;
		if (!fill_a(stack_a, i + 1, split_args - 1))
		{
			free_split(split_args);
			exit(1);
		}
		free_split(split_args);
	}
	else
	{
		if (!fill_a(stack_a, argc, argv))
			exit(1);
	}
}

static int	is_sorted(t_stack *stack)
{
	while (stack && stack->next_node)
	{
		if (stack->number > stack->next_node->number)
			return (0);
		stack = stack->next_node;
	}
	return (1);
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
	if (!is_sorted(stack_a))
	{
		if (stack_size(stack_a) <= 5)
			small_stack_sort(&stack_a, &stack_b);
		else
			radix_sort(&stack_a, &stack_b);
	}
	stack_clear(&stack_a);
	stack_clear(&stack_b);
	return (0);
}
