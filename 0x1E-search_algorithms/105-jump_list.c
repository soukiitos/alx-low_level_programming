#include "search_algos.h"
/**
 * jump_list - Search for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: A pointer to the head of the list to search in
 * @size: The number of nodes in list
 * @value: The value to search fr
 *
 * Return: 0
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, s = (size_t)sqrt(size);
	listint_t *p = NULL;

	if (list == NULL)
		return (NULL);
	while (list->n < value)
	{
		p = list;
		for (; i < s && list->next != NULL; i++)
			list = list->next;
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			p->index,
			list->index);
	while (p != NULL && p->index <= list->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", p->index, p->n);
		if (p->n == value)
			return (p);
		p = p->next;
	}
	return (NULL);
}
