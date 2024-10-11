/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monsef <monsef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:24:06 by monsef            #+#    #+#             */
/*   Updated: 2024/10/11 11:24:08 by monsef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s_new;
	size_t	i;

	i = 0;
	s_new = malloc(nmemb * size);
	if (!s_new)
		return (NULL);
	while (i < (nmemb * size))
	{
		s_new[i] = 0;
		i++;
	}
	return (s_new);
}
