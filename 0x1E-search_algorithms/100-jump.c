#include "search_algos.h"
/**
 * jump_search - Search for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: A pointer to the first element
 * @size: The number of elements in array
 * @value: The  value to search for
 *
 * Return: 0
 */
int jump_search(int *array, size_t size, int value)
{
	int j = (int)sqrt(size);
	int i = 0, s = j, l;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	while (s < (int)size && array[s] < value)
	{
		i = s;
		s += j;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%d] and [%d]\n", i, s);
	for (l = i; l <= s && l < (int)size; l++)
	{
		printf("Value checked array[%d] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
	}
	return (-1);
}
