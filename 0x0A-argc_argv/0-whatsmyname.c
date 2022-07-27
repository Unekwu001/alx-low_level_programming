#include <stdio.h>

/**
 * main - writes a program name.
 * @argc: argument count
 * @argv: array of pointers to cli argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
