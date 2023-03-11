#include "main.h"
/**
 * print_line - prints a straight line
 * @n: depicts the number of _ to form line
 *
 * Return: void
 */
void print_line(int n)
{
	int x;

	if ((n != 0) && !(n < 0))
	{
		x = 0;
		while (x < n)
		{
			_putchar(95);
			x++;
		}
	}
	_putchar('\n');
}
