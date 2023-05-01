#include "lists.h"
/**
 * get_nodeint_at_index - Return the nth node of a listint_t list
 * @head: A pointer
 * @index: An integer
 *
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;

	while ((head->next) && (i < index))
	{
		i++;
		head = head->next;
	}
	if (i < index)
	{
		return (NULL);
	}
	return (head);
}
