#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at a given position
 * @head: A pointer
 * @idx: The index of the list
 * @n: An integer
 *
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *i, *h = *head;
	size_t j = 0;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
	{
		return (NULL);
	}
	i->n = n;
	if (idx == 0)
	{
		i->next = h;
		h = i;
		return (i);
	}
	while (j < idx - 1)
	{
		j++;
		h = h->next;
	}
		if (h != NULL || (h->next) != NULL)
		{
			i->next = h->next;
			h->next = i;
			return (i);
		}
	return (NULL);
}
