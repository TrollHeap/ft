#include "libft.h"
/**
 * ft_strlen - Calculates the length of a string.
 *
 * @str: A pointer to the string whose length is to be calculated.
 *
 * Description:
 * This function iterates through the characters of the string `str` until it
 * encounters the null terminator (`\0`). It counts the number of characters
 * before the null terminator and returns this count as the length of the string.
 *
 * Return:
 * The length of the string (number of characters before the null terminator).
 */
size_t ft_strlen(const char *str)
{
	size_t n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}
