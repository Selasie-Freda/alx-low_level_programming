#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if letter is upper
 * @c: letter to check letter
 *
 * Return: 1 on success
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}
