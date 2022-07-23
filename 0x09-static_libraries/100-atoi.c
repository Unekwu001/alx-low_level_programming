#include "main.h"
int _atoi(char *s)
{
	unsigned int length, size;

	length = 0;
	size = 0;

	while (*(s + length) != '\0')
	{
		if (size > 0 && (*(s + length) < '0' || *(s + length) > '9'))
			break;
		if (*(s + length) == '-')
			return (1);
	}
	return (0);
}
