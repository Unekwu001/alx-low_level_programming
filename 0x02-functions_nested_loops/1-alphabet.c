/*
 * File: 0-putchar.c
 *
 * Auth: Unekwu Shaibu
 *
 */

#include "main.h"

/**
 * print_alphabet - this is a description for the function print_alphabet.
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always (0) Success
 */
void print_alphabet(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
		putchar(v);
	putchar('\n');
}

