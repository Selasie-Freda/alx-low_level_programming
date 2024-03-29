#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index, starting from 0 of the bit you want to get
 * @n: number to be passed
 * Return: the value of the bit at index index
 * or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	return ((n >> index) & 1);
}
