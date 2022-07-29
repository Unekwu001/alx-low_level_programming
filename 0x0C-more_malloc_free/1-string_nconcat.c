#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates using an inputed amount of bytes.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the maximum number of bytes of s2 to concatenate s1.
 * Return:returns NULL  if the function fails.
 * otherwise, a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
		unsigned int len = n, index;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		for (index = 0; s1[index]; index++)
			len++;
		s = malloc(sizeof(char) * (len + 1));

		if (s == NULL)
			return (NULL);

		len = 0;

		for (index = 0; s1[index]; index++)
			s[len++] = s1[index];
		for (index = 0; s2[index] && index < n; index++)
			s[len++] = s2[index];

		s[len] = '\0';
		return (s);
}


