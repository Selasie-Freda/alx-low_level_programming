#include "main.h"
/**
 * _memset - fills n bytes of a memory
 * @s: pointer to start of memory area
 * @b: constant byte to fill with
 * @n: num bytes to fill in
 *
 * Return: pointer to begininng of memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
