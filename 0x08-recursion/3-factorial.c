#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number for which to find factorial
 *
 * Return: -1 if n is lower than zero
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
