#include "lists.h"
/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list
 * @head: A pointer
 * @n: An integer
 *
 * Return: 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;

	i = malloc(sizeof(dlistint_t));
	if (i != NULL)
	{
		i->n = n;
		i->prev = NULL;
		i->next = *head;
	}
	else
	{
		return (NULL);
	}
	if (*head)
		(*head)->prev = i;
	*head = i;
	return (i);
}
