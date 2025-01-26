/**
 * ft_isascii - Checks if a given integer represents a valid ASCII character.
 *
 * @value: The integer value to check. This is typically the ASCII value of a character.
 *
 * Description:
 * This function determines whether the input value corresponds to a valid ASCII character.
 * In the ASCII table, valid characters have values between 0 and 127 (inclusive).
 * The value 0177 is the octal representation of 127.
 *
 * Return:
 * Returns 1 (true) if the value is a valid ASCII character.
 * Returns 0 (false) otherwise.
 */
int ft_isascii(int value)
{
    return (value >= 0 && value <= 0177);
}
