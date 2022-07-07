#include "main.h"
/**
 * more_numbers - This function prints numbers
 * File - 5-more_numbers.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always (1) Success and (0) Always failure
 *
 */
void more_numbers(void)
{
	int i;
	int ro;

	for (i = 0; i <= 10; i++)
	{
		for (ro = 0; ro <= 14; ro++)
		{
			if (ro / 10 > 0)
				putchar((ro / 10) + '0');
			putchar((ro % 10) + '0');
		}
		putchar('\n');
	}
}

