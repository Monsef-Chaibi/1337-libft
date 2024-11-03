#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char *str1 = "12345";
	char *str2 = "-98765";
	char *str3 = "0";
	char *str4 = "42abc";
	char *str5 = "abc42";
	char *str6 = "   123   ";
	char *str7 = "   -987   ";
	char *str8 = "   +42   ";
	char *str9 = "   123abc   ";
	char *str10 = "   -987xyz   ";

	int num1 = atoi(str1);
	int num2 = atoi(str2);
	int num3 = atoi(str3);
	int num4 = atoi(str4);
	int num5 = atoi(str5);
	int num6 = atoi(str6);
	int num7 = atoi(str7);
	int num8 = atoi(str8);
	int num9 = atoi(str9);
	int num10 = atoi(str10);

	printf("Original atoi:\n");
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);
	printf("%d\n", num5);
	printf("%d\n", num6);
	printf("%d\n", num7);
	printf("%d\n", num8);
	printf("%d\n", num9);
	printf("%d\n", num10);

	int ft_num1 = ft_atoi(str1);
	int ft_num2 = ft_atoi(str2);
	int ft_num3 = ft_atoi(str3);
	int ft_num4 = ft_atoi(str4);
	int ft_num5 = ft_atoi(str5);
	int ft_num6 = ft_atoi(str6);
	int ft_num7 = ft_atoi(str7);
	int ft_num8 = ft_atoi(str8);
	int ft_num9 = ft_atoi(str9);
	int ft_num10 = ft_atoi(str10);

	printf("\nft_atoi:\n");
	printf("%d\n", ft_num1);
	printf("%d\n", ft_num2);
	printf("%d\n", ft_num3);
	printf("%d\n", ft_num4);
	printf("%d\n", ft_num5);
	printf("%d\n", ft_num6);
	printf("%d\n", ft_num7);
	printf("%d\n", ft_num8);
	printf("%d\n", ft_num9);
	printf("%d\n", ft_num10);

	return 0;
}
