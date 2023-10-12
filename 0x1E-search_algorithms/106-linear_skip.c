#include "search_algos.h"
/**
 * linear_skip - Search for a value in a sorted skip list of integers
 * @list: A pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: 0
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *i;

	if (list == NULL)
		return (NULL);
	i = list;
	do {
		list = i;
		i = i->express;
		printf("Value checked at index [%d] = [%d]\n", (int)i->index, i->n);
	} while (i->express && i->n < value);
	if (i->express == NULL)
	{
		list = i;
		while (i->next)
			i = i->next;
	}
	printf("Value found between indexes [%d] and [%d]\n",
			(int)list->index,
			(int)i->index);
	while (list != i->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
