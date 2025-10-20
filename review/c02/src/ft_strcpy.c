#include <stdio.h>
#include <unistd.h>

/* ft_strcpy — exercice de la piscine 42 (c02) */

void ft_strcpy(char *dest, char *src)
{
	while (src && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
}

int main(void)
{
	char src[] = "Salut";
	char dest[10];
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
