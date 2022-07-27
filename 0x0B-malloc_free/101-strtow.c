#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;
	
	for (; s[size] != '\0'; size++)
		;
	return (size);
}
