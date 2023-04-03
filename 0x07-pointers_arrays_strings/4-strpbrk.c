#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: The first character
 * @accept: The second character
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
