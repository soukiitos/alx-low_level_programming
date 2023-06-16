#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete the node at index
 * @head: A pointer
 * @index: The index of the node that should be deleted
 *
 * Return: 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *i = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	while (index != 0)
	{
		index--;
		if (i != NULL)
		{
			i = i->next;
		}
		else
		{
			return (-1);
		}
	}
	if (i != *head)
	{
		i->prev->next = i->next;
		if (i->next != NULL)
		{
			i->next->prev = i->prev;
		}
	}
	else
	{
		*head = i->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	free(i);
	return (1);
}
