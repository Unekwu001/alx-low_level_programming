/*
 * File: 0-putchar.c
 *
 * Auth: Unekwu Shaibu
 *
 */

#include "main.h"

/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always (0) Success.
 *
 * print_alphabet() - prints small lettered alphabets from a to z
 */
void print_alphabet(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
		putchar(v);
	putchar('\n');
	return (0);
}
int main(void)
{
	print_alphabet();
	return (0);
}
