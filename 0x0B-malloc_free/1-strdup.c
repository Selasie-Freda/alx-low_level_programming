#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 *
 * @str: string to be duplicated
 * Return: pointer to the duplicated string on success
 * NULL if there is insufficient memory available
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	while ((dup[i] = str[i]) != '\0')
		i++;
	return (dup);
}
