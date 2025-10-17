#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main(void)
{
	int x = 13;
	int y = 5;

	ft_ultimate_div_mod(&x, &y);
	printf("div = %d, mod = %d\n", x, y);
	return (0);
}
