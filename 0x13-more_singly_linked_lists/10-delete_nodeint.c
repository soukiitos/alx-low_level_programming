#include "lists.h"
/**
 * delete_nodeint_at_index - Delete the node at index index of a listint_t list
 * @head: A pointer
 * @index: The index of the node
 *
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *j, *h = *head;

	if (*head != NULL)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (!h || !(h->next))
			return (-1);
		h = h->next;
	}
	j = h->next;
	h->next = j->next;
	free(j);
	return (1);
}
