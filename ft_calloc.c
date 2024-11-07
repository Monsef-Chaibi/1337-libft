/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:56:37 by mchaibi           #+#    #+#             */
/*   Updated: 2024/11/07 12:17:09 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s_new;
	size_t	i;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
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
