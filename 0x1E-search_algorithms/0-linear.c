#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: the first index where value is located, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		if (*(array + i) == value)
			return (i);
		i++;
	}
	return (-1);
}
