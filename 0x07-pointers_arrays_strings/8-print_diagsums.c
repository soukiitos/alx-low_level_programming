#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Print the sum of two diagonals of a square matrix
 * @a: An integer
 * @size: An integer
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, S1 = 0, S2 = 0;
	
	for (i = 0; i < size; i++)
	{
		S1 = S1 + a[i + size * i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		S2 += a[(size - i - 1) + i * size];
	}
	printf("%d, %d\n", S1, S2);
}
