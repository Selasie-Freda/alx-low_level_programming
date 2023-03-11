#include "main.h"
/**
 * swap_int - swaps two passed parameters
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;
	*b = tmp;
}
