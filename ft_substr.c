/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:52:11 by mchaibi           #+#    #+#             */
/*   Updated: 2024/11/05 17:32:15 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str_tmp;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if ((size_t)start >= s_len)
		len = 0;
	else if (len > s_len - (size_t)start)
		len = s_len - (size_t)start;
	str_tmp = malloc(len + 1);
	if (!str_tmp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_tmp[i] = s[start + i];
		i++;
	}
	str_tmp[i] = '\0';
	return (str_tmp);
}
