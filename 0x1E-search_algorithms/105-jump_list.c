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
	listint_t *j, *curr = list, *p = NULL;

	if (list == NULL)
		return (NULL);
	while (curr->next && curr->n < value)
	{
		p = curr;
		for (; i < s && curr->next; i++)
			curr = curr->next;
		printf("Value checked at index [%d] = [%d]\n", (int)curr->index, curr->n);
	}
	printf("Value found between indexes [%d] and [%d]\n",
			(int)p->index,
			(int)curr->index);
	for (j = p; j && j->index <= curr->index; j = j->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)j->index, j->n);
		if (j->n == value)
			return (j);
	}
	return (NULL);
}
