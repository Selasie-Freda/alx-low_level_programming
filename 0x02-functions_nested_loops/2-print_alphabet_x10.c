#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	int x;
	int repeat = 0;

	while (repeat < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
			_putchar('\n');
			repeat++;
	}
}
