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

void ft_putstr_fd(char *s, int fd)
{
	if(!s)
		return;
	write(fd, s, ft_strlen(s));
}