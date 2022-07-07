#include "main.h"
/**
 * print_diagonal - This function prints the character \, n times to draw a line
 * File - 7-print_diagonal.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always (1) Success and (0) Always failure
 * @n: no of characters to draw
 */
void print_diagonal(int n)
{
	int i,j;
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}

