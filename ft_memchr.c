/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monsef <monsef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:29:38 by monsef            #+#    #+#             */
/*   Updated: 2024/10/14 12:10:53 by monsef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_tmp;
	size_t			i;

	s_tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_tmp[i] == (unsigned char)c)
		{
			return (&s_tmp[i]);
		}
		i++;
	}
	return (NULL);
}
