#include "function_pointers.h"
/**
 * array_iterator - Execute a function
 * @array: The array
 * @size: The size of the array
 * @action: A Pointer to the function
 *
 * Return: 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
		return;
}
