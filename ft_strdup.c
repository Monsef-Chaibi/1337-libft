/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:13:36 by mchaibi           #+#    #+#             */
/*   Updated: 2024/10/31 10:30:23 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*s_new;
	unsigned int	i;

	s_new = malloc(ft_strlen(s) + 1);
	i = 0;
	if (!s_new)
		return (NULL);
	while (s[i] != '\0')
	{
		s_new[i] = s[i];
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
