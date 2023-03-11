#include <string.h>
#include "main.h"
/**
 * _strspn - finds length of prefix substring
 *
 * @s: string to check
 * @accept: substring of chars
 *
 * Return: n bytes in initial segment of s which consists
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
