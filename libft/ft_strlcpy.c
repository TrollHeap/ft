#include "libft.h"

/**
 * ft_strlcpy - Copies a string to a destination buffer with size limit.
 *
 * @dst: The destination buffer.
 * @src: The source string to copy.
 * @size: The size of the destination buffer.
 *
 * Description:
 * This function copies up to `size - 1` characters from the string `src`
 * to the buffer `dst`, null-terminating the result if `size` is greater than 0.
 *
 * If the source string is longer than `size`, the result will be truncated.
 * The function always ensures that the destination string is null-terminated
 * (provided `size` > 0).
 *
 * Return:
 * The total length of the string `src`, which allows the caller to detect
 * truncation if the return value is >= `size`.
 */
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i = 0;
	size_t src_len = 0;

	while (src[src_len] != '\0')
		src_len++;

	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}

	return src_len;
}
