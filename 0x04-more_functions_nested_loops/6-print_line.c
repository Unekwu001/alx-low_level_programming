#include "main.h"
/**
 * print_line - This function prints the character _ n times to draw a line
 * File - 6-print_line.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always (1) Success and (0) Always failure
 * @n: no of characters to draw
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}

