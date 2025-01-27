/**
 * ft_isprint - Checks if a given integer represents a printable ASCII character.
 *
 * @c: The integer value to check. This is typically the ASCII value of a character.
 *
 * Description:
 * This function determines whether the input value corresponds to a printable ASCII character.
 * Printable characters are those with ASCII values between 32 (space) and 126 (~), inclusive.
 *
 * Return:
 * Returns 1 (true) if the value is a printable character.
 * Returns 0 (false) otherwise.
 */
int ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
