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
 */
int main(void)
{
	char sapa[9] = "_putchar" ;
	int v ;

	for ( v = 0; v <= 7; v++ )
		putchar(sapa[v]);
	putchar('\n');
	return (0);
}	
