#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - the sum of all its parameters
 * @n: number of parameters received
 *
 * Return: 0 if n is 0 of the vsum of parameters
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0, i;

	/*validate valist and initialize*/
	if (n == 0)
		return (0);
	va_start(valist, n);

	/* iterate through list, update sum, free list */
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
