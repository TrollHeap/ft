#include "libft.h"

/**
 * ft_isalnum - Checks if a given integer represents an alphanumeric character.
 *
 * @value: The integer value to check. This is typically the ASCII value of a
 * character.
 *
 * Description:
 * This function determines whether the input value corresponds to an alphabetic
 * character (uppercase or lowercase) or a numeric digit (0–9). It uses the
 * `ft_isalpha` and `ft_isdigit` functions to perform the checks.
 *
 * Return:
 * Returns 1 (true) if the value is an alphanumeric character.
 * Returns 0 (false) otherwise.
 */
int ft_isalnum(int value)
{
	return (ft_isalpha(value) || ft_isdigit(value));
}
