#include "main.h"
/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: A long unsigned int
 * @index: The index
 *
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = (*n | (1 << index));
	if (index > 63)
		return (-1);
	return (1);
}
