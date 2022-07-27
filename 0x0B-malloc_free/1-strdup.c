#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - allocates space in memory and makes a copy of str
 * @str: pointer to vthe str to be copied
 * Return: pointer to the duplicate string, or Null if failed
 */

char *_strdup(char *str)
{
	int size = 0;
	char *strCopy;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	strCopy = malloc(size * sizeof(*str) + 1);
	if (strCopy == 0)
		return (NULL);
	strcpy(strCopy, str);
	return (strCopy);
}
