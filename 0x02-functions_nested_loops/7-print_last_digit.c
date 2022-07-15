#include "main.h"
#include "6-abs.c"
/**
 * _print_last_digit - main function
 * File - 6-abs.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: returns last digit of n.
 *
 * @n: integer to get last digit.
*/
int print_last_digit(int n)
{
	putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}

