/**
 * ft_toupper - Converts a lowercase letter to uppercase.
 *
 * @c: The character to be converted.
 *
 * Description:
 * This function checks if the input character `c` is a lowercase letter (between 'a' and 'z').
 * If it is, the function converts it to the corresponding uppercase letter by subtracting 32
 * from its ASCII value. If the character is not a lowercase letter, it is returned unchanged.
 *
 * Return:
 * The uppercase equivalent of `c` if `c` is a lowercase letter.
 * Otherwise, `c` is returned unchanged.
 */
int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32); 
    return (c); 
}
