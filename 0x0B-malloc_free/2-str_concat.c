#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenate Two Strings
 * @s1: The first string
 * @s2: The second string
 *  Return: 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, a = 0, b = 0;
	char *s;

	while ((s1 && s1[a]) && (s2 && s2[b]))
	{
		a++;
		b++;
	}
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		while (i < a)
	{
		s[i] = s1[i];
		i++;
	}
	}
	if (s2)
	{
		while (j < (a + b))
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	}
	s[i] = '\0';
	return (s);
}
