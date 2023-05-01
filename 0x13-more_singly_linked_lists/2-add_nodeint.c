#include "lists.h"
/**
 * add_nodeint - Add a new node at the beginning of a listint list
 * @head: A pointer
 * @n: An integer
 *
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->n = n;
		node->next = *head;
	}
	if (*head != NULL)
	{
		node->next = *head;
	}
	*head = node;
	return (node);
}
