#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: the index, startin from zero of the bit you want to set
 * @n: pointer
 * Return: 1 if code works, and -1 if it does not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n |= (1UL << index);
	return (1);
}
