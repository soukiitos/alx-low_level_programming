#include "lists.h"
/**
 * sum_dlistint - Return the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: A pointer
 *
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *i = head;

	while (i)
	{
		sum = i->n + sum;
		i = i->next;
	}
	return (sum);
}
