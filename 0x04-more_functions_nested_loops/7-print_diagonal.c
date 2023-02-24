#include "main.h"
/**
 * print_diagonal - creates a diagonal line
 * @n: lengh pf line
 *
 * Return: 0 (success)
 */
void print_diagonal(int n)
{
	int x, y;

	if ((n != 0) && !(n < 0))
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
					_putchar(92);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
