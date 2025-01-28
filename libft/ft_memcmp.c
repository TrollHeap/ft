#include "libft.h"

/**
 * ft_memcmp - Compares two memory blocks byte by byte.
 *
 * @s1: A pointer to the first memory block to compare.
 * @s2: A pointer to the second memory block to compare.
 * @n: The number of bytes to compare.
 *
 * Description:
 * This function compares the first `n` bytes of the memory blocks pointed
 * to by `s1` and `s2`. The comparison is performed byte by byte as unsigned
 * characters. The function stops comparing as soon as a difference is found
 * or after all `n` bytes have been compared.
 *
 * If the memory blocks differ, the function returns the difference between
 * the first differing bytes, cast to `unsigned char`. If the memory blocks
 * are identical for the first `n` bytes, the function returns `0`.
 *
 * Return:
 * An integer less than, equal to, or greater than zero if the first differing
 * byte in `s1` is found to be less than, equal to, or greater than the
 * corresponding byte in `s2`.
 */
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s_one = (unsigned char *) s1;
	unsigned char *s_two = (unsigned char *) s1;
	size_t         i = 0;

	while (n--)
	{
		if (s_one[i] != s_two[i])
		{
			return (s_one[i] - s_two[i]);
		}
	}
	return (0);
}
