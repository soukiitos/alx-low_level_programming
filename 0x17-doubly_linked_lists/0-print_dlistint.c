#include "lists.h"
/**
 * print_dlistint - Print all the elements of a dlistint_t list
 * @h: A pointer
 *
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *j = h;

	for (i = 0; j; i++)
	{
		printf("%i\n", j->n);
		j = j->next;
	}
	return (i);
}
