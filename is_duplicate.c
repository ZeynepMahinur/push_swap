#include "push_swap.h"

int	is_duplicate(char **args, int size)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_atoi(args[i]) == ft_atoi(args[j]))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
