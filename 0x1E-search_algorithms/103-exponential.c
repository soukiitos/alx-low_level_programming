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
	size_t i = 0, j;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	if (i < size)
		j = i;
	else
		j = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, j);
	return (exp_search_binary(array, i / 2, j, value));
}

/**
 * exp_search_binary - Search for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: A pointer
 * @a: An index
 * @b: An index
 * @value: The value to search for
 *
 * Return: 0
 */
int exp_search_binary(int *array, size_t a, size_t b, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (b >= a)
	{
		printf("Searching in array: ");
		for (i = a; i < b; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = a + (b - a) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			b = i - 1;
		else
			a = i + 1;
	}
	return (-1);
}
