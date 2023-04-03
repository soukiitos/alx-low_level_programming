#include "main.h"
/**
 * _memcpy - Copy memory area
 * @dest: The destination
 * @src: The source
 * @n: An integer
 *
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
