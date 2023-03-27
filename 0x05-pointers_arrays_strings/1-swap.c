#include "main.h"
/**
 * swap_int - Swap the values of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;
	*b = s;
}
