#include "libft.h"
/**
 * ft_strncmp - Compares up to `n` characters of two strings.
 *
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * @n: The maximum number of characters to compare.
 *
 * Description:
 * This function compares up to `n` characters of the strings `s1` and `s2`.
 * It returns an integer less than, equal to, or greater than zero if `s1` is
 * found, respectively, to be less than, to match, or be greater than `s2`.
 *
 * Return:
 * An integer less than, equal to, or greater than zero if `s1` is found,
 * respectively, to be less than, to match, or be greater than `s2`.
 */
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;

	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
	return (0);
}
