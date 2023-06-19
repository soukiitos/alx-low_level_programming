#include "main.h"
/**
 * _memset - Fill the memory with a constant byte
 * @s: The memory area
 * @n: The number of bytes
 * @b: The constant byte
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
