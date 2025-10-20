#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int i;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;

	ft_rev_int_tab(tab, size);

	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");
	return 0;
}
