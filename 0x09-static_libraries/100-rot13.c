/**
 * rot13 - replaces letters with the 13th letter in the alphabet
 * @str: string to be encoded
 *
 * Return: pointer to encoded string
 */
char *rot13(char *str)
{
	char offset, *r = str;

	while (*str)
	{
		offset = (*str & 32) + 65;
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			*str = (*str - offset + 13) % 26 + offset;
		str++;
	}
	return (r);
}
