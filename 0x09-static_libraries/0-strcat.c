#include <string.h>
#include "main.h"
/**
 * _strcat - concanates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: dest on success
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
