/**
 * ft_isalpha - Checks if a given integer represents an alphabetic character.
 *
 * @value: The integer value to check. This is typically the ASCII value of a character.
 *
 * Description:
 * This function determines whether the input value corresponds to an uppercase ('A' to 'Z')
 * or lowercase ('a' to 'z') alphabetic character in the ASCII table.
 *
 * Return:
 * Returns 1 (true) if the value is an alphabetic character.
 * Returns 0 (false) otherwise.
 */
int ft_isalpha(int value)
{
	return ((value >= 'a' && value <= 'z') || (value >= 'A' && value <= 'Z'));
}
