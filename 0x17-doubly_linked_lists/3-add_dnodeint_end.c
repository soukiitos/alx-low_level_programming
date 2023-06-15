#include "lists.h"
/**
 * add_dnodeint_end - Add a new node at the end of a dlistint_t list
 * @head: A pointer
 * @n: An integer
 *
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i, *j;

	i = malloc(sizeof(dlistint_t));
	if (i != NULL)
	{
		i->n = n;
		i->next = NULL;
	}
	else
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		j = *head;
	}
	else
	{
		i->prev = NULL;
		*head = i;
		return (i);
	}
	while (j->next != NULL)
	{
		j = j->next;
	}
	j->next = i;
	i->prev = j;
	return (i);
}
