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
	size_t index = 0, j = 0, s = (size_t)sqrt(size);
	listint_t *p = NULL;

	if (list == NULL || size == 0)
		return (NULL);
	do {
		p = list;
		j++;
		index = j * s;
		while (list->next && list->index < index)
			list = list->next;
		if (list->next == NULL && index != list->index)
			index = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
	} while (index < size && list->next && list->n < value);
	printf("Value found between indexes [%d] and [%d]\n",
			(int)p->index,
			(int)list->index);
	for (; p && p->index <= list->index; p = p->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)p->index, p->n);
		if (p->n == value)
			return (p);
	}
	return (NULL);
}
