#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * starting with the first character and a new line.
 * @str: argument
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
			continue;
	}
	_putchar('\n');
}
