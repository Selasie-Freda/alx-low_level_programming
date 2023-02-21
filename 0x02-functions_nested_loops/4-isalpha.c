#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks if alphbet is alpha
 * @c: alphabet to be checked
 *
 * Return: 1 if input is alphabet
 * return 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) == 1)
		return (0);
	else
		return (1);
}
