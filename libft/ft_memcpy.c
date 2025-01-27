#include "libft.h"
/**
 * ft_memcpy - Copies a block of memory from source to destination.
 *
 * @dst: A pointer to the destination memory where the content is to be copied.
 * @src: A pointer to the source memory block to copy from.
 * @n: The number of bytes to copy.
 *
 * Description:
 * This function copies `n` bytes from the memory block pointed to by `src` to
 * the memory block pointed to by `dst`. The memory areas must not overlap.
 * If the memory areas overlap, use ft_memmove instead.
 *
 * Return:
 * A pointer to the destination memory block `dst`.
 */
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *src2 = (unsigned char *) src;
	unsigned char *dst2 = (unsigned char *) dst;

	while (n--)
	{
		*dst2++ = *src2++;
	}

	return (dst);
}
