#include "lists.h"
/**
 * reverse_listint - Reverse a listint_t linked list
 * @head: A pointer
 *
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i, *j;
	
	i = NULL;
	if (*head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		j = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = j;
	}
	*head = i;
	return (*head);
}
