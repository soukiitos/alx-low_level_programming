#include "lists.h"
/**
 * free_list - Free a list_t list
 * @head: A pointer
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
		i = head;
		i = head->next;
		free(head->str);
		free(i);
	}
}
