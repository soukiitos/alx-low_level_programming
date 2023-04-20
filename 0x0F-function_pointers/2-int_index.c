#include "function_pointers.h"
/**
 * int_index - Search for an integer
 * @array: The array
 * @size: The size of the array
 * @cmp: The pointer to the function to be used to compare values
 *
 * Return: 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL || size <= 0 || cmp != NULL)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
