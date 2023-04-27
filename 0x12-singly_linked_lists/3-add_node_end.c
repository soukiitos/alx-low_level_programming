#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list_t list
 * @head: The head
 * @str: The string
 *
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *n = *head;
	size_t i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	node = malloc(sizeof(list_t));
	node->str = strdup(str);
	if (!node)
	{
		return (NULL);
	}
	node->len = i;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (n->next)
	{
		n = n->next;
	}
	n->next = node;
	return (node);
}
