/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:13:19 by mchaibi           #+#    #+#             */
/*   Updated: 2024/11/02 15:24:02 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	x;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_size <= dst_len)
		return (src_len + dst_size);
	i = dst_len;
	x = 0;
	while (src[x] != '\0' && i < dst_size - 1)
	{
		dst[i] = src[x];
		x++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
