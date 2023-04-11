#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dim array of integers
 * @width: The width
 * @height: The height
 *
 * Return: 0.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **) malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for(i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);
			for (j = 0; j <= i; j++)
			{
				free(a[j]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
