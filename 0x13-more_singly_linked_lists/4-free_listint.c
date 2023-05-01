#include "lists.h"
/**
 * free_listint - Free a listint_t list
 * @head: A pointer
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
