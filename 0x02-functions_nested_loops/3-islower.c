#include "main.h"
/**
 * _islower - redflags any character
 * which is not a lowercase alphabet followed by a new line
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

