#include "main.h"
/**
 * print_square - prints a square of # given size
 * File - 8-print_square.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always (1) Success and (0) Always failure
 * @size: size to draw
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}

