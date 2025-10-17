#include <unistd.h>

void ft_print_numbers(void)
{
	char *a = "0123456789";
	write(1, a, 10);
}

int main(void)
{
	ft_print_numbers();
	return 0;
}
