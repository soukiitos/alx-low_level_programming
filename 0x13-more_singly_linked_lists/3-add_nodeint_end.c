#include "lists.h"
/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: A pointer
 * @n: An integer
 *
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->n = n;
		node->next = NULL;
	}
	i = *head;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = node;
	}
	return (node);
}
