#include "main.h"
/**
 * get_bit - Return the value of a bit at a given index
 * @n: A long unsigned integer
 * @index: The index
 *
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);
	i = n >> index & 1;
	if (index > 63)
		return (-1);
	return (i);
}
