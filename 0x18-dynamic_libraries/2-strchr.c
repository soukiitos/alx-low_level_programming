#include <stdio.h>
#include "main.h"
/**
 * _strchr - Locate a character in a string
 * @s: The String
 * @c: The Character
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	while (s[a] >= '\0')
	{
		a++;
		if (s[a] == c)
			return (s + a);
	}
	return (NULL);
}
