#include "search_algos.h"
/**
 * advanced_binary - Search for a value in a sorted array of integers
 * @array: A pointer to the first element
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: 0
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = rec_advanced_binary(array, size, value);
	if (i >= 0 && array[i] != value)
		return (-1);
	return (i);
}

/**
 * rec_advanced_binary - Search for a value in a sorted array of integers
 * @array: A pointer
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: 0
 */
int rec_advanced_binary(int *array, size_t size, int value)
{
	size_t j = 0, mid = size / 2;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (; j < size; j++)
	{
		if (j > 0)
		{
			printf(", ");
		}
		printf("%d", array[j]);
	}
	printf("\n");
	if (mid && size % 2 == 0)
		mid--;
	if (value == array[mid])
	{
		if (mid > 0)
			return (rec_advanced_binary(array, mid + 1, value));
		return ((int)mid);
	}
	if (value < array[mid])
		return (rec_advanced_binary(array, mid + 1, value));
	mid++;
	return (rec_advanced_binary(array + mid, size - mid, value) + mid);
}
