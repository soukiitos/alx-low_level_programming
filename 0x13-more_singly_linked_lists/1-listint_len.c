#include "lists.h"
/**
 * listint_len - Return the number of elements in a linked listint_t list
 * @h: A pointer
 *
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h; i++)
	{
		h = h->next;
	}
	return (i);
}
