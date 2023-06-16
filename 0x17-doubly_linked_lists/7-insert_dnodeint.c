#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: A pointer
 * @idx: The index of the list where the new node should be added
 * @n: An integer
 *
 * Return: 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *i, *j = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx != 1)
	{
		idx--;
		j = j->next;
		if (j == NULL)
		{
			return (NULL);
		}
	}
	if (j->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
	{
		return (NULL);
	}
	else
	{
		i->n = n;
		i->prev = j;
		i->next = j->next;
		j->next->prev = i;
		j->next = i;
	}
	return (i);
}
