#include <ctype.h>
#include "main.h"
/**
 * Description: return 1 if num is lower
 * returns 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return 1;
	else
		return 0;
}
