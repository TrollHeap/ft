#include "libft.h"

/**
 * ft_memmove - Copies `len` bytes from `src` to `dst`, handling overlapping memory areas.
 *
 * @dst: The destination memory area.
 * @src: The source memory area.
 * @len: The number of bytes to copy.
 *
 * Description:
 * This function copies `len` bytes from the memory area `src` to the memory area `dst`.
 * It handles overlapping memory areas correctly by copying bytes from the end to the
 * beginning if `dst` is located after `src` and overlaps with it. Otherwise, it copies
 * from the beginning to the end.
 *
 * Return:
 * A pointer to the destination memory area `dst`.
 */
void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *src2 = (unsigned char *) src;
	unsigned char *dst2 = (unsigned char *) dst;

	if (!dst && !src)
		return (dst);

	if (len == 0)
		return (dst);

	if ((dst2 > src2) && (dst2 < src2 + len))
	{
		dst2 += len;
		src2 += len;
		while (len--)
		{
			*(--dst2) = *(--src2);
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}

	return (dst);
}
