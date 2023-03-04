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
	int i;
	int consistC = 0;
	int prevC;

	while (*s)
	{
		i = 0;
		prevC = consistC;
		while (*(accept + i) != '\0')
		{
			if (*(accept + 1) == *s)
				consistC++;
			i++;
		}
		if (prevC == consistC)
			break;
		s++;
	}
	return (consistC);
}
