#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of a string
 * @str: argument
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, half, n, x;

	len = strlen(str);

	if ((len % 10) == 0)
	{
		half = len / 2;
		for (i = half; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (len - 1) / 2;
		for (x = n - 1; x < len; x++)
			_putchar(str[x]);
	}
	_putchar('\n');
}
