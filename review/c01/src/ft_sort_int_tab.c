#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int tmp;
	int swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
		size--; // l’élément le plus grand est déjà placé à la fin
	}
}

int main(void)
{
	int tab[] = {42, 7, 19, -3, 0, 7};
	int size = 6;

	printf("Avant tri : ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("Après tri  : ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	return 0;
}
