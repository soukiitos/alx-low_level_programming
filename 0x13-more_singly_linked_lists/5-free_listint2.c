#include "lists.h"
/**
 * free_listint2 - Free a listint_t list
 * @head: A pointer
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		i = *head;
		*head = (*head)->next;
		free(i);
	}
	head = NULL;
}
