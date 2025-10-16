#include <unistd.h>

/* ft_putstr_non_printable — exercice de la piscine 42 (c02) */

void ft_putstr_non_printable(void)
{
    write(1, "ft_putstr_non_printable\n", 24);
}
