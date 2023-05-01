#include "lists.h"
/**
 * print_listint - Print all the elements of a listint_t list
 * @h: A pointer
 *
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
