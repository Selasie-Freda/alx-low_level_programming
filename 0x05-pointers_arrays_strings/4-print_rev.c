#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: parameter to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		if (s[i] < 0)
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(s[i]);
	}
	_putchar('\n');
}
