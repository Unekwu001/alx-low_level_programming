#include "main.h"
/**
 * swap_int - resets the value to 98.
 *
 * @a: pointer.
 * @b: second pointer.
 */
void swap_int(int *a, int *b)
{
	int sapa = *a;
	*a = *b;
	*b = sapa;
}
