#include "search_algos.h"
/**
 * interpolation_search - Search for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: A pointer to the first element
 * @size: The number of elements
 * @value: The value to search for
 *
 * Return: 0
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, l;

	if (array == NULL || size == 0)
		return (-1);
	while (i <= j)
	{
		l = i + (((double)(j - i) / (array[j] - array[i])) * (value - array[i]));
		if (l < size)
			printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", l);
			break;
		}
		if (array[l] == value)
			return (l);
		if (array[l] < value)
			i = l + 1;
		else
			j = l - 1;
	}
	return (-1);
}
