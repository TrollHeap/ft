#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int x, y;
	x = a / b;
	y = a % b;
	*div = x;
	*mod = y;
}

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 24;
	div = 0;
	mod = 0;

	ft_div_mod(a, b, &div, &mod);

	printf("a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
}
