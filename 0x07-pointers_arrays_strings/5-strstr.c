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
	unsigned int len;
	/*Get length of needle for strncmp*/
	len = 0;
	while (needle[len] != '\0')
		len++;
	/*compare substring*/
	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
