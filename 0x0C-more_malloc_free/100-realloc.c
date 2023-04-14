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
	unsigned int i;
	char *ad;

	if (new_size > old_size)
	{
		ad = malloc(new_size);
		if (ad == NULL)
		{
			return (ad);
		}
		i = 0;
		while (i < old_size)
		{
			i++;
			ad[i] = *((char *) ptr + 1);
			free(ptr);
		}
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ad = malloc(new_size);
		if (ad == NULL)
		{
			return (NULL);
		}
	}
	if ((ptr != NULL) && (new_size == 0))
	{
		free(ptr);
		return (NULL);
	}
	return (ad);
}
