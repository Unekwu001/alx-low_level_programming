#include "main.h"
/**
 * print_most_numbers - This function prints numbers
 * File - 4-print_most_numbers.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always (1) Success and (0) Always failure
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		putchar(i);
	}
	putchar('\n');
}

