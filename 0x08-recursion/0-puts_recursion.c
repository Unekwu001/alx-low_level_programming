#include "main.h"
/**
 * _puts_recursion - priints a string followedby a new line.
 * @s: pointer to the string.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
