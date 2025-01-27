#include "libft.h"
/**
 * ft_tolower - Converts an uppercase letter to lowercase.
 *
 * @c: The character to be converted.
 *
 * Description:
 * This function checks if the input character `c` is an uppercase letter (between 'A' and 'Z').
 * If it is, the function converts it to the corresponding lowercase letter by adding 32
 * to its ASCII value. If the character is not an uppercase letter, it is returned unchanged.
 *
 * Return:
 * The lowercase equivalent of `c` if `c` is an uppercase letter.
 * Otherwise, `c` is returned unchanged.
 */
int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
