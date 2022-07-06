/*
 * File: 0-putchar.c
 *
 * Auth: Unekwu Shaibu
 *
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always (0) Success
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b = 'z'; b++)
		putchar(b);
		putchar('\n');
	}
}

