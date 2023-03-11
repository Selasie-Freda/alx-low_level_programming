#include "main.h"
/**
 * print_last_digit - writes the last digit of a number to the screen
 * @i: number to check for last digit
 *
 * Return: 0 on success
 */
int print_last_digit(int i)
{
	int a;

	if (i < 0)
		i = -i;

	a = i % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
