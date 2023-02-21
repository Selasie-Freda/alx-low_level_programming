#include "main.h"
/**
 * main - check the code
 *
 * Return: always 0
 * Description: prints alphabets to the screen
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
