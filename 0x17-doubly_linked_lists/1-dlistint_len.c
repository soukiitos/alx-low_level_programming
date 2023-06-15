#include "lists.h"
/**
 * dlistint_len - Return the number of elements in a linked dlistint_t list
 * @h: A pointer
 *
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *j = h;

	for (i = 0; j; i++)
	{
		j = j->next;
	}
	return (i);
}
