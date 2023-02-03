#include "search_algos.h"

/**
 * recurse_exponential - recursive implement of binary search
 * @array: array to search
 * @left: leftmost index
 * @right: rightmost index
 * @value: value to search
 *
 * Return: index of found value; or -1 if not found
 */
int recurse_exponential(int *array, size_t left, size_t right, int value)
{
	size_t i = left, mid;

	if (left > right)
		return (-1);

	printf("Searching in array: %d", array[i++]);
	while (i <= right)
		printf(", %d", array[i++]);
	printf("\n");

	mid = left + ((right - left) / 2);
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
	{
		if (mid != 0)
			return (recurse_exponential(array, left, mid - 1, value));
		else
			return (-1);
	}
	else
		return (recurse_exponential(array, mid + 1, right, value));
}

/**
 * exponential_search - search array
 * @array: array to search
 * @size: size of array
 * @value: search value
 *
 * Return: index of matched value; -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t right = 1, left;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		right *= 2;
	}

	if (array[right] == value)
		return (right);

	left = right / 2;

	if (right >= size)
		right = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (recurse_exponential(array, left, right, value));
}
