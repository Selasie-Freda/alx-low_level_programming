#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memory using malloc
 * @b: memory address
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	return (pointer);
}
