#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: leet string
 */
char *leet(char *str)
{
	char *r = str;
	char alpha[] = {'a', 'e', 'o', 't', 'l'};
	char numbers[] = {4, 3, 0, 7, 1};
	int i;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == alpha[i] || *str == alpha[i] - 32)
				*str = numbers[i] + '0';
		}
		str++;
	}
	return (r);
}
