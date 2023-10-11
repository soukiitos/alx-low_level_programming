#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: 0
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, mid, l;

	if (array == NULL)
		return (-1);
	while (i <= j)
	{
		mid = (i + j) / 2;
		printf("Searching in array: ");
		for (l = i; l <= j; l++)
		{
			printf("%d", array[l]);
			if (l < j)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			i = mid + 1;
		else
			j = mid - 1;
	}
	return (-1);
}
