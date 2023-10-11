#include "search_algos.h"
/**
 * exponential_search - Search for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: A pointer to the first element
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: 0
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j = 0, l;

	if (array == NULL)
		return (-1);
	if (array)
	{
		while (i < size && array[i] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i *= 2;
		}
		j = (i < size - 1) ? i : size;
		i /= 2;
		printf("Value found between indexes [%lu] and [%lu]\n", i, j);
		while (i <= j)
		{
			l = (i + j) / 2;
			printf("Value checked array[%lu] = [%d]\n", l, array[l]);
			if (array[l] == value)
				return (l);
			if (array[l] < value)
				i = l + 1;
			else
				j = l - 1;
		}
	}
	return (-1);
}

