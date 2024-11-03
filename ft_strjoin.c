/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:24:07 by mchaibi           #+#    #+#             */
/*   Updated: 2024/10/24 10:27:12 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_tmp;
	int		i;
	int		s1_len;

	s1_len = ft_strlen(s1);
	str_tmp = malloc(s1_len + ft_strlen(s2) + 1);
	if (!str_tmp)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str_tmp[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str_tmp[s1_len + i] = s2[i];
		i++;
	}
	str_tmp[i + s1_len] = '\0';
	return (str_tmp);
}
