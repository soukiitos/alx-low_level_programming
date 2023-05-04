#include "main.h"
/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: A character
 *
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i = 0;

	if (!b)
		return (0);
	n = 0;
	for (; b[i]; i++)
	{
		if (b[i] < '0' && b[i] > '1')
			return (0);
		if (b[i] && 1)
			n = 2 * n + b[i] - '0';
	}
	return (n);
}
