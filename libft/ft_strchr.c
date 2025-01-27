/**
 * ft_strchr - Locates the first occurrence of a character in a string.
 *
 * @s: The string to be searched.
 * @c: The character to locate.
 *
 * Description:
 * This function searches for the first occurrence of the character `c` (converted to a char)
 * in the string `s`. It iterates through the string until it finds the character or reaches
 * the end of the string (null terminator). If the character is found, a pointer to its location
 * in the string is returned. If the character is not found, the function returns NULL.
 *
 * Return:
 * A pointer to the first occurrence of `c` in `s`.
 * NULL if `c` is not found in `s`.
 */
char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
		{
			return ((char *) s);
		}
		s++;
	}

	if (*s == (char) c)
		return ((char *) s);

	return (0);
}
