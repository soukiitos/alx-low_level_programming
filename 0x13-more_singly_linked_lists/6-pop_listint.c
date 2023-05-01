#include "lists.h"
/**
 * pop_listint - Delete the head node of a listint_t
 * @head: A pointer
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	size_t i;
	listint_t *j = *head;

	if (j == NULL)
	{
		return (0);
	}
	else
	{
		i = j->n;
		*head = j->next;
		free(j);
	}
	return (i);
}
