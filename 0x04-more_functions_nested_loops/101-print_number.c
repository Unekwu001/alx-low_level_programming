#include "main.h"
void print_integer(int m);

/**
 * print_number - a function that prints an integer
 * @n: an input integer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n == 0)
		putchar('0');
	else if (n < 0)
	{
		putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}
/**
 * print_integer - prints n
 * @m: input unsigned integer
 * Return: nothing
 */
void print_integer(int m)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (m / i != 0)
		{
			putchar((m / i) % 10 + '0');
		}
}
