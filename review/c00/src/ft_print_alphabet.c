#include <unistd.h>

void ft_print_alphabet(void)
{
	char a, z;
	a = 'a';
	z = 'z';

	while (a <= z)
	{
		write(1, &a, 1);
		a++;
	}
}

int main()
{
	ft_print_alphabet();
	return 0;
}
