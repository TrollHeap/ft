#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
}

int main(void)
{
	char src1[] = "Salut";
	char dest1[10];

	char src2[] = "Bonjour";
	char dest2[10];

	char src3[] = "Hi";
	char dest3[10];

	ft_strncpy(dest1, src1, 8);
	ft_strncpy(dest2, src2, 3);
	ft_strncpy(dest3, src3, 5);

	printf("Cas 1 (src < n) : \"%s\"\n", dest1); // "Salut"
	printf("Cas 2 (src > n) : \"%s\"\n", dest2); // "Bon"
	printf("Cas 3 (src < n) : \"%s\"\n", dest3); // "Hi"

	return 0;
}
