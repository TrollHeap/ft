#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int n;
	n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	return n;
}

int main()
{
	char str[] = "Hello, World!";
	printf("%d", ft_strlen(str));
	return 0;
}
