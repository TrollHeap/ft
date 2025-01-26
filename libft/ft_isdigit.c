/**
 * ft_isdigit - Checks if a given integer represents a numeric digit (0–9).
 *
 * @value: The integer value to check. This is typically the ASCII value of a character.
 *
 * Description:
 * This function determines whether the input value corresponds to a numeric digit
 * in the ASCII table, i.e., between '0' (48) and '9' (57).
 *
 * Return:
 * Returns 1 (true) if the value is a digit.
 * Returns 0 (false) otherwise.
 */
int ft_isdigit(int value)
{
    return (value >= '0' && value <= '9');
}
