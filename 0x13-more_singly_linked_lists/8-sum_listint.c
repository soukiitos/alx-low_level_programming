#include "lists.h"
/**
 * sum_listint - Return the sum of all the data n of a listint_t linked list
 * @head: A pointer
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	size_t S = 0;

	while (head)
	{
		S += head->n;
		head = head->next;
	}
	return (S);
}
