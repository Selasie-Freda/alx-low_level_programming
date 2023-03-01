#include <string.h>
/**
 * _strncat - appends the string pointed to by another string
 * up to n characters long
 * @dest: destination
 * @src: source
 * @n: number of bytes to append to dest
 *
 * Return: dest on success
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
