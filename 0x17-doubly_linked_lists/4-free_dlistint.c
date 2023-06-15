#include "lists.h"
/**
 * free_dlistint - Free a dlistint_t list
 * @head: A pointer
 *
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
