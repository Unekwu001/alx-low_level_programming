#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char oya[8] = "_putchar";
	int x;

	for (x = 0; x <= 7; x++)
		putchar(oya[x]);
	putchar('\n');
	return (0);
}


