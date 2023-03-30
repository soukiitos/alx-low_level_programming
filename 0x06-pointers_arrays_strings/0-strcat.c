#include "main.h"
/**
 * _strcat - Concatenate two strings
 * @dest: The string's destination
 * @src: The string's source
 *
 * Return: 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (dest[j])
	{
		j++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
