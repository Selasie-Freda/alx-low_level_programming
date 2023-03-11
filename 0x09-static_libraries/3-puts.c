#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: string parameter
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < 600; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(str[i]);
	}
}
