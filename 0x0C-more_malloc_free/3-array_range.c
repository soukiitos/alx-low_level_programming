#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Create an array of integers
 * @min: The minimum
 * @max: The maximum
 *
 * Return: 0.
 */
int *array_range(int min, int max)
{
	int *i, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	i = malloc(sizeof(int) * (max - min + 1));
	if (i == NULL)
	{
		return (NULL);
	}
	for (; min <= max; min++)
	{
		i[j] = min;
		j++;
	}
	return (i);
}
