#include <unistd.h>

void ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int x;
	int y;

	x = 5;
	y = 10;
	ft_swap(&x, &y);
	return (0);
}
