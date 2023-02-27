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
