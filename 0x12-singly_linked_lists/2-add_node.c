#include "lists.h"
/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: A pointer
 * @str: A string
 *
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *node;

	while (str[i])
	{
		i++;
	}
	node = malloc(sizeof(list_t));
	if (!node)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = i;
	if (*head != NULL)
	{
		node->next = *head;
	}
	*head = node;
	return (*head);
}
