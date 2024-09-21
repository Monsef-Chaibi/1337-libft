#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *str_tmp;
	size_t str_tmp_len;

	if (!s || !f)
        return NULL;
	i = 0;
	str_tmp_len = ft_strlen(s);
	str_tmp = malloc(str_tmp_len + 1);
	if(!str_tmp)
		return (NULL);
	while(s[i] != '\0')
	{
		str_tmp[i] = (*f)(i,s[i]);
		i++;
	}
	str_tmp[i] = '\0';
	return (str_tmp);
}