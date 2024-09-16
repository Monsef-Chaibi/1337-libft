#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

int ft_check_char(char const *str,const char c)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char *set)
{
	int	i;
	int	x;
	int e;
	char *str_tmp;

	x = ft_strlen(s1) - 1;
	i = 0;
	e = 0;
	while(ft_check_char(set, s1[i]))
		i++;
	while(x >= i && ft_check_char(set, s1[x]))
		x--;
	str_tmp = malloc(x - i + 2);
	if (!str_tmp)
		return (NULL);
	while (i <= x)
		str_tmp[e++] = s1[i++];
	str_tmp[e] = '\0';
	return (str_tmp);
}