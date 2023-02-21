#include <ctype.h>
#include "main.h"
/**
 * Description - checks if input is lowercase alphabet
 *
 * Return: 1 if input is lowercase 0 if not
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
