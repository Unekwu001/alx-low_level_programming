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
	int ko;
	int qos;

	for (ko = 0; ko < 10; ko++)
	{
		for (qos = 'a'; qos <= 'z'; qos++)
			putchar(qos);
		putchar('\n');
	}
}

