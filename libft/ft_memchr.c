#include "libft.h"
/**
 * ft_memchr - Searches for the first occurrence of a byte in a memory block.
 *
 * @s: A pointer to the memory block to be searched.
 * @c: The byte value to search for, interpreted as an unsigned char.
 * @n: The number of bytes to search in the memory block.
 *
 * Description:
 * This function scans the initial `n` bytes of the memory block pointed to
 * by `s` for the first occurrence of the byte `c`. The byte `c` is converted
 * to an unsigned char before comparison. If the byte is found, a pointer to
 * its location within the memory block is returned.
 *
 * If the byte `c` is not found within the first `n` bytes, the function
 * returns `NULL`.
 *
 * Return:
 * A pointer to the first occurrence of the byte `c` in the memory block `s`,
 * or `NULL` if the byte is not found.
 */
void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr = (const unsigned char *) s;

	while (n--)
	{
		if (*ptr == (unsigned char) c)
		{
			return (void *) ptr;
		}
		ptr++;
	}
	return NULL;
}
