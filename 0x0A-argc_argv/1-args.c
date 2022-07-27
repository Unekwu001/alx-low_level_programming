#include <stdio.h>

/**
 * main - prints the nuber of arguments.
 * @argc: count of arguments.
 * @argv: array of pointers to cli.
 * Return: 0.
 *
 */

int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
