/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_safe.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarikan <zarikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 20:50:31 by zarikan           #+#    #+#             */
/*   Updated: 2025/10/07 20:51:26 by zarikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isspace_safe(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	ft_isdigit_safe(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	ft_sign_safe(char *str, int *sign)
{
	int	i;

	i = 0;
	*sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

int	ft_atoi_safe(char *str, int *out)
{
	int		i;
	long	res;
	int		s;

	i = 0;
	res = 0;
	s = 1;
	while (ft_isspace_safe(str[i]))
		i++;
	i += ft_sign_safe(&str[i], &s);
	if (!ft_isdigit_safe(str[i]))
		return (0);
	while (ft_isdigit_safe(str[i]))
	{
		res = (res * 10) + (str[i] - '0');
		if ((s == 1 && res > 2147483647) || (s == -1 && - res < -2147483648))
			return (0);
		i++;
	}
	if (str[i] != '\0')
		return (0);
	*out = (int)(res * s);
	return (1);
}
