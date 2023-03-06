#include "main.h"
#include <string.h>
/**
 * _strstr - finds the first occurrence of a substring needle in the
 * string haystack
 * @needle: string to be found
 * @haystack: pointer to major string
 *
 * result: pointer to answer
 * Return: result or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *result;
	int i = 0;

	result = strstr(haystack, needle);

	while (result[i])
	{
		if (i != '\0')
			return (result);
		else
			return (NULL);
	}
	i++;
	return (0);
}
