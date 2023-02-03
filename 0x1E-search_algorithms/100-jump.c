#include "search_algos.h"

/**
 * jump_recurse_inner - recursive implement for recursive implement
 * @array: array to search
 * @size: size of array
 * @end: end of subarray
 * @idx: current index
 * @val: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int jump_recurse_inner(int *array, size_t size, size_t end,
		size_t idx, int val)
{
	if (idx >= size || idx > end || array[idx] > val)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	if (array[idx] == val)
		return (idx);
	else
		return (jump_recurse_inner(array, size, end, idx + 1, val));
}

/**
 * jump_recurse - recursive implement of jump search
 * @array: array to search
 * @size: size of array
 * @step: jump increment
 * @idx: current index
 * @val: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int jump_recurse(int *array, size_t size, size_t step, size_t idx, int val)
{
	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	/* if value is greater, jump forward */
	if (((idx + step < size) && array[idx + step] < val))
		return (jump_recurse(array, size, step, idx + step, val));

	/* recurse subarray */
	printf("Value found between indexes [%lu] and [%lu]\n", idx, (idx + step));
	return (jump_recurse_inner(array, size, idx + step, idx, val));
}

/**
 * jump_search - perform jump search
 * @array: pointer to first elem of array
 * @size: number of elems in array
 * @value: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (jump_recurse(array, size, sqrt(size), 0, value));
}
