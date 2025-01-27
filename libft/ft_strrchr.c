#include "libft.h"
/**
 * ft_strrchr - Locates the last occurrence of a character in a string.
 *
 * @s: The string to be searched.
 * @c: The character to locate.
 *
 * Description:
 * This function searches for the last occurrence of the character `c` (converted to a char)
 * in the string `s`. It iterates through the string and keeps track of the last occurrence
 * of `c`. If the character is found, a pointer to its last occurrence in the string is returned.
 * If the character is not found, the function returns NULL.
 *
 * Return:
 * A pointer to the last occurrence of `c` in `s`.
 * NULL if `c` is not found in `s`.
 */
char *ft_strrchr(const char *s, int c)
{
	char *last_occurrence = NULL;

	while (*s)
	{
		if (*s == (char) c)
		{
			last_occurrence = (char *) s;
		}
		s++;
	}

	if (*s == (char) c)
	{
		last_occurrence = (char *) s;
	}

	return last_occurrence;
}
