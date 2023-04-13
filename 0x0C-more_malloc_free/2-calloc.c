#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocate memory for an array
 * @nmemb: The number of members
 * @size: The size
 *
 * Return: 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, j = 0;
	char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	c = malloc(j);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		c[i] = 0;
	}
	return (c);
}
