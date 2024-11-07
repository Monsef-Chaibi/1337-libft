/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:43:52 by mchaibi           #+#    #+#             */
/*   Updated: 2024/11/06 12:51:16 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *str, char c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (str[0] != c && str[0] != '\0')
		result = 1;
	while (str[i] != '\0')
	{
		if (str[i] == c && (str[i + 1] != c && str[i + 1] != '\0'))
			result++;
		i++;
	}
	return (result);
}

static char	**ft_free_split(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count && str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**ft_put(char **str, char const *s, char c, int nb)
{
	int	start;
	int	i;
	int	x;

	start = 0;
	i = 0;
	x = 0;
	while (x < nb)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		str[x] = ft_substr(s, start, i - start);
		if (!str[x])
			return (ft_free_split(str, x));
		x++;
	}
	str[x] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str_tmp;

	if (!s)
		return (NULL);
	str_tmp = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!str_tmp)
		return (NULL);
	if (!ft_put(str_tmp, s, c, ft_count_word(s, c)))
		return (NULL);
	return (str_tmp);
}
