#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocate the memory using malloc
 * @b: The number of bytes
 *
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
