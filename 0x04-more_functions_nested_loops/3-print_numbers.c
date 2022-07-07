#include "main.h"
/**
 * print_numbers - This function prints numbers
 * File - 3-print_numbers.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always (1) Success and (0) Always failure
 *
 */
void print_numbers(void);
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

