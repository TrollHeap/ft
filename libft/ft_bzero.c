#include "libft.h"
/**
 * ft_bzero - Sets a block of memory to zero.
 *
 * @s: A pointer to the memory block to initialize.
 * @n: The number of bytes to set to zero.
 *
 * Description:
 * This function sets the first `n` bytes of the memory block pointed to by
 * `s` to zero (value 0). It is typically used to clear memory regions before
 * usage, ensuring that they are initialized with zeros. This is useful for
 * initializing arrays, structures, or buffers.
 *
 * Unlike memset, which can fill memory with any value, `ft_bzero` specifically
 * sets memory to zero. This function does not return a value, as the pointer
 * `s` is directly modified.
 *
 * Usage:
 * - Use `ft_bzero` when you specifically need to set memory to zero.
 * - For more general purposes, consider using `ft_memset`.
 */
void ft_bzero(void *s, size_t n)
{
	unsigned char *p = (unsigned char *) s;

	while (n--)
	{
		*p++ = 0;
	}
}
