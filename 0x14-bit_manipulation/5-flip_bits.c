#include "main.h"
/**
 * flip_bits - Return the number of bits
 * @n: A long unsigned unteger
 * @m: A long unsigned integer
 *
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, j;

	for (; n ^ m; n >>= 1, m >>= 1)
	{
		if ((n ^ m) & 1)
			i++;
		j = n ^ m;
		j = j >> 1;
	}
	return (i);
}
