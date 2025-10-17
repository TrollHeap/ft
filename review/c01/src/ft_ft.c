#include <unistd.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int x;
	x = 0;
	ft_ft(&x);
	return (0);
}
