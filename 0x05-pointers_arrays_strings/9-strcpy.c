#include "main.h"
/**
 * _strcpy - acts in similar form as strcpy
 * @dest: stores the now copied value
 * @src: copies to dest
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}
