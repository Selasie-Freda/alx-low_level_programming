#include <string.h>
/**
 * _strcmp - compares characters in a string
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 on success, non zero otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	n = strcmp(s1, s2);
	return (n);
}
