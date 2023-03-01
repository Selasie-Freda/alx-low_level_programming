#include <string.h>
/**
 * _strncpy - copies string from source to destination up
 * to a number
 * @dest: string destination
 * @src: string source
 * @n: number to cpy up to
 *
 * Return: dest on success
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
