#include "main.h"
/**
 * print_sign - Write a function that checks for alphabetic character
 * File - 5-sign.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: pls go through the function. you will understand
 *
 * @n: single alphabeth input
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

