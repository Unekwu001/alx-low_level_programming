#include <stdio.h>
/**
 * main - This function does the fizzbuzz
 * File - 4-print_most_numbers.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always Success (0)
 *
 * multiples of 3 with fizz
 * multiples of 5 with buzz
 * multiples of both 3 and 5 with fizzbuzz
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

