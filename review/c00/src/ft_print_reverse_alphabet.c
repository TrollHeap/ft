#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char z, a;
	z = 'z';
	a = 'a';

	while (a < z)
	{
		write(1, &z, 1);
		z--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
