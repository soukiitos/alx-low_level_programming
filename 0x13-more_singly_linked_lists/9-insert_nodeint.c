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
	size_t j;

	i = malloc(sizeof(listint_t));
	n = i->n;
	if (i == NULL)
	{
		return (NULL);
	}
	if (idx == 0 && n)
	{
		*head = i;
		i->next = *head;
		return (i);
	}
	j = 0;
	while (j < idx)
	{
		j++;
		if (!h || !(h->next))
		{
			i->next = h->next;
			h->next = i;
		}
		else
		{
			h = h->next;
		}
	}
	return (NULL);
}
