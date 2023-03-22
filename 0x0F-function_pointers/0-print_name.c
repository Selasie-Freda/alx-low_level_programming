#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - a function that prints a name
 * @name: name(string) to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
