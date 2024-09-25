#include <stdio.h>

int ft_count_dig(int x)
{
	int results;

	if (!x)
		return (1);
	
	results = 1;
	while(x / 10 != 0)
	{
		results++;
		x /= 10;
	}
	return (results);
}

char *ft_putchar(int nbr_dig, int signe, int n)
{	
	char *str; 

	str = malloc(nbr_dig + 1);
	if (!str)
		return (NULL);
	str[nbr_dig] = '\0';
	nbr_dig--;
	while (nbr_dig >= 0)
	{
		str[nbr_dig] = (n % 10) + 48;
		nbr_dig--;
		n /= 10;
	}
	if (signe > 0)
		str[0] = '-';
	return (str);
}

char *ft_itoa(int n)
{
	char *str_tmp;
	int nbr_dig;
	int signe;

	signe = 0;
	if (n == -2147483648)
	{
		str_tmp = "-2147483648";
		return (str_tmp);
	}
	else if (n < 0)
	{
		signe = 1;
		n = -n;
	}
	nbr_dig = ft_count_dig(n) + signe;
	str_tmp = ft_putchar(nbr_dig, signe, n);
	return (str_tmp);
}

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

void ft_putnbr_fd(int n, int fd)
{
	char *str_tmp;

	str_tmp = ft_itoa(n);
	ft_putstr_fd(str_tmp, fd);
}