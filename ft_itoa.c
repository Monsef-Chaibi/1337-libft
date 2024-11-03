/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:40:34 by mchaibi           #+#    #+#             */
/*   Updated: 2024/10/26 15:25:35 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int nb)
{
	int	result;

	result = 0;
	while (nb != 0)
	{
		result++;
		nb /= 10;
	}
	return (result);
}

char	*ft_putnbr(int nb, int nbr_dig, int signe)
{
	char	*str;

	str = malloc(nbr_dig + 1);
	if (!str)
		return (NULL);
	str[nbr_dig] = '\0';
	nbr_dig--;
	while (nbr_dig >= 0)
	{
		str[nbr_dig] = (nb % 10) + '0';
		nb /= 10;
		nbr_dig--;
	}
	if (signe)
		str[0] = '-';
	return (str);
}

char	*ft_check(int c)
{
	char	*str;

	if (c == 0)
	{
		str = malloc(2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (c == -2147483648)
	{
		str = malloc(12);
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		signe;
	int		nbr_dig;

	signe = 0;
	if (n == 0)
		return (ft_check(n));
	else if (n == -2147483648)
	{
		str = ft_check(n);
		return (str);
	}
	else if (n < 0)
	{
		signe += 1;
		n = -n;
	}
	nbr_dig = ft_count(n) + signe;
	str = ft_putnbr(n, nbr_dig, signe);
	return (str);
}
