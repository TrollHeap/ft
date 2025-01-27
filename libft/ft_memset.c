#include "libft.h"

/**
 * ft_memset - Fills a block of memory with a specified value.
 *
 * @b: A pointer to the memory block to fill.
 * @c: The value to set (passed as an int, but treated as an unsigned char).
 * @len: The number of bytes to fill.
 *
 * Description:
 * This function fills the first `len` bytes of the memory block pointed to by
 * `b` with the constant byte `c`. The value `c` is cast to an unsigned char
 * before being used. The function returns the original pointer `b`.
 *
 * Return:
 * A pointer to the memory block `b`.
 */
void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;
	unsigned char  uc;

	p = (unsigned char *) b;
	uc = (unsigned char) c;

	while (len--)
	{
		*p++ = uc;
	}

	return (b);
}
