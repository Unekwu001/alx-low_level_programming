#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		(putchar(a);
	}
	putchar('\n');
	return (0);
}
