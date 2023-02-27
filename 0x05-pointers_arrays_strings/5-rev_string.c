#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: parameter
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		if (s[i] < 0)
		{
			break;
		}
		else
			_putchar(s[i]);
	}
	_putchar('\n');
}
