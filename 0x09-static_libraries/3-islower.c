#include <ctype.h>
#include "main.h"
/**
 * _islower - checks for lowercase alphabet
 * @c: the character to check
 *
 * Return: 1 on success (if lowercase)
 * else return 0
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
