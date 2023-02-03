#include "search_algos.h"

/**
 * check_next - check value at next step
 * @probe: pointer sent out to check next step in list
 * @step: jump interval
 *
 * Return: value at next jump interval
 */
listint_t *check_next(listint_t *probe, size_t step)
{
	if (step <= 0 || probe->next == 0)
		return (probe);
	return (check_next(probe->next, step - 1));
}

/**
 * jump_list_recurse_inner - recursive implement for recursive implement
 * @curr: current node to check
 * @step: interval of jumps
 * @val: search value
 *
 * Return: index where value is located; -1 if value not found
 */
listint_t *jump_list_recurse_inner(listint_t *curr, size_t step, int val)
{
	if (curr == NULL || step <= 0 || curr->n > val)
		return (NULL);

	printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);

	if (curr->n == val)
		return (curr);
	else
		return (jump_list_recurse_inner(curr->next, step - 1, val));
}

/**
 * jump_list_recurse - recursive implement of jump search
 * @curr: current node of list
 * @size: size of list
 * @step: jump increment
 * @val: search value
 *
 * Return: index where value is located; -1 if value not found
 */
listint_t *jump_list_recurse(listint_t *curr, size_t size,
		size_t step, int val)
{
	listint_t *next_step = NULL;

	next_step = check_next(curr, step);
	printf("Value checked at index [%lu] = [%d]\n",
next_step->index, next_step->n);
	if (curr->index + step < size && (next_step->n < val))
		return (jump_list_recurse(next_step, size, step, val));

	printf("Value found between indexes [%lu] and [%lu]\n",
curr->index, (next_step->index));

	return (jump_list_recurse_inner(curr, step, val));
}

/**
 * jump_list - jump search for linked list
 * @list: list to search
 * @size: size of list
 * @value: search value
 *
 * Return: index of matched value; NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	if (list == NULL)
		return (NULL);

	return (jump_list_recurse(list, size, sqrt(size), value));
}
