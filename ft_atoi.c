/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:59:29 by mchaibi           #+#    #+#             */
/*   Updated: 2024/11/07 12:17:24 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_space(const char *s, size_t *i)
{
	while ((9 <= s[*i] && s[*i] <= 13) || s[*i] == 32)
	{
		(*i)++;
	}
}

int	ft_atoi(const char *nptr)
{
	size_t				i;
	unsigned long long	result;
	int					sign;

	result = 0;
	sign = 1;
	i = 0;
	ft_space(nptr, &i);
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (48 <= nptr[i] && nptr[i] <= 57)
	{
		result *= 10;
		result = result + (nptr[i] - 48);
		if (result >= 9223372036854775807 && sign == 1)
			return (-1);
		if (result > 9223372036854775807 && sign == -1)
			return (0);
		i++;
	}
	return ((int)result * sign);
}
