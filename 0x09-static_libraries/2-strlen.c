#include "main.h"
/**
 * _strlen - Returns the length of a string.
 *
 * @s: character to getstring
 *
 * Return: The length.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
