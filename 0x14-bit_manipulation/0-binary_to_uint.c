#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: the converted number or 0 if there are chars in string b which are
 * not 0 and 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int x = 0;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	num <<= 1;
	num += b[x] - '0';
	x++;
	}
	return (num);
}
