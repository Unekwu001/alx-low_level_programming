#include "search_algos.h"

/**
 * find_last_node - find last node
 * @node: search pointer
 *
 * Return: pointer to final node
 */
skiplist_t *find_last_node(skiplist_t *probe)
{
	if (probe->next == NULL)
		return (probe);
	else
		return (find_last_node(probe->next));
}

/**
 * linear_skip_recurse - search normal list
 * @probe: search pointer
 * @stop: endpoint of subsearch; either express node or NULL
 * @value: search value
 *
 * Return: pointer to match; NULL if not found
 */
skiplist_t *linear_skip_recurse(skiplist_t *probe, skiplist_t *stop, int value)
{
	if (probe == stop)
	{
		if (stop != NULL && stop->n == value)
			return (stop);
		else
			return (NULL);
	}

	printf("Value checked at index [%lu] = [%d]\n",
probe->index, probe->n);

	if (probe->n == value)
		return (probe);
	else
		return (linear_skip_recurse(probe->next, stop, value));
}

/**
 * linear_skip_express_recurse - search express list
 * @probe: search pointer
 * @value: search value
 *
 * Return: pointer to match or match range; NULL if not in range
 */
skiplist_t *linear_skip_express_recurse(skiplist_t *probe, int value)
{
	skiplist_t *last = NULL;

	if (probe->express == NULL)
	{
		last = find_last_node(probe);
		printf("Value found between indexes [%lu] and [%lu]\n",
probe->index, last->index);
		return (probe);
	}

	printf("Value checked at index [%lu] = [%d]\n",
probe->express->index, probe->express->n);

	if (probe->express->n >= value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
probe->index, probe->express->index);
		return (probe);
	}
	else
		return (linear_skip_express_recurse(probe->express, value));
}

/**
 * linear_skip - perform search with skip list
 * @list: list to search
 * @value: search value
 *
 * Return: matching node; NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *zone = NULL;

	if (list == NULL)
		return (NULL);

	zone = linear_skip_express_recurse(list, value);

	if (zone->n == value)
		return (zone);
	else
		return (linear_skip_recurse(zone, zone->express, value));
}
