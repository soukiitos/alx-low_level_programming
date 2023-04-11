#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of chars,
 * and initialize it with a specific char
 * @size: The number of bytes
 * @c: The character
 *
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	for (; size--; )
	{
		a[size] = c;
	}
	return (a);
}
