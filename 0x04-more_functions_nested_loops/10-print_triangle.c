#include "main.h"
/**
 * print_triangle - This function prints the character # with a given size
 * File - 10-print_triangle.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always (1) Success and (0) Always failure
 * @size: size of triangle to draw
 */
void print_triangle(int size)
{
	int h, w, d;

	if (size <= 0)
		putchar('\n');
	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= (size - h); w++)
			putchar(' ');
		for (d = 1; d <= h; d++)
			putchar('#');
		putchar('\n');
	}

}

