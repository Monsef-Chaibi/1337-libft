#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
char m[125] = "monsef";
char p[] = "mop";
strlcat(m, p, 7);
printf("%s", m);

}