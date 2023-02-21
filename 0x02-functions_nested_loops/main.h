#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void);

/**
 * print_alphabet - prints lowercase alphabets to stdout
 *
 * Return: void so 0 on success
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

void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - writes lowercase alphabets a number of times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, repeat;

	repeat = 0;	/*number of times to print to screen*/

	while (repeat < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
			_putchar('\n');
			repeat++;
	}
}
