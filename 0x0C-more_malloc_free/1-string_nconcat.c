#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenate two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes
 *
 * Return: 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a1 = 0, a2 = 0, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[a1]; a1++)
	{
		;
	}
	for (; s2[a2]; a2++)
	{
		;
	}
	if (n >= a2)
		i = a1 + a2;
	else
		i = a1 + n;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (a1 = 0; s1[a1]; a1++)
	{
		s[a1] = s1[a1];
	}
	for (a2 = 0; a2 < n; a2++)
	{
		s[a1] = s2[a2];
		a1++;
	}
	s[a1] = '\0';
	return (s);
}
