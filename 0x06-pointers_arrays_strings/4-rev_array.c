#include "main.h"
/**
 * reverse_array -  Reverse the content of an array of integers
 * @a: The array of integers
 * @n: The number of elements of the array
 *
 * Return: 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
