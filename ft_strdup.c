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
