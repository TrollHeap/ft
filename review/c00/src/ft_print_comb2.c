#include <unistd.h>

void ft_putchar(char c, int n)
{
	write(1, &c, n);
}

void ft_put2nbr(int n)
{
	char a;
	char b;

	a = '0' + (n / 10);
	b = '0' + (n % 10);
	ft_putchar(a, 1);
	ft_putchar(b, 1);
}

void ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_put2nbr(x);
			ft_putchar(' ', 1);
			ft_put2nbr(y);

			if (!(x == 98 && y == 99))
				ft_putchar(',', 1);

			ft_putchar(' ', 1);
			y++;
		}
		x++;
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
