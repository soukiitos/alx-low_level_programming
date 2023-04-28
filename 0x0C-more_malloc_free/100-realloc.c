#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocate a memory block using malloc and free
 * @ptr: The pointer to the memory
 * @old_size: The size of the allocated space for ptr
 * @new_size: The new size of the new memory block
 *
 * Return: 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
