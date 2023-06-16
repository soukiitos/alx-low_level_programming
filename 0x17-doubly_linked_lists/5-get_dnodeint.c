#include "lists.h"
/**
 * get_dnodeint_at_index - Return the nth node of a dlistint_t linked list
 * @head: A pointer
 * @index: The index of the node
 *
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		index --;
		if (head != NULL)
		{
			head = head->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
