#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks if number is a digit
 * @c: number to be checked
 *
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
