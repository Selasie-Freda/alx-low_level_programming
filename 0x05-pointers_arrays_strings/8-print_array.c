#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @*a: pointer
 * @n: argument
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for ( i =0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(",");
		}
	}
	putchar('\n');
}
