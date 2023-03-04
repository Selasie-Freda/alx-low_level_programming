#include "main.h"
/**
 * _memcpy - copies n bytes of memory
 * @dest: destination string
 * @src: source string
 * @n: num bytes to copy from src
 *
 * Return: pointer to beginning of memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (start);
}
