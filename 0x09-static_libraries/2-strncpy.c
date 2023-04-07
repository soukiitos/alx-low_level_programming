#include "main.h"
/**
 * _strncpy - Copy a String
 * @dest: The string's destination
 * @src: The string's source
 * @n: An integer
 *
 * Return: 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
