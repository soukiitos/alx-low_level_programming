#include "main.h"
/**
 * _strncat - Concatenate two strings
 * @dest: The string's destination
 * @src: The string's source
 * @n: An integer
 *
 * Return: 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
