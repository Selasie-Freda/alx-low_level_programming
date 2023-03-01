#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: array
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, x, tmp;

	x = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[x];
		a[x--] = tmp;
	}
}
