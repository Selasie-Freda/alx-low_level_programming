#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks if alphbet is alpha
 * @c: alphabet to be checked
 *
 * Return: 1 if input is alphabet
 * return 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
