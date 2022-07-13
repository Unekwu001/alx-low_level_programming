#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - puts a string
 *
 * @dest: destination to copy
 *
 * @src: src
 * Return: Alwats retunrs true
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
