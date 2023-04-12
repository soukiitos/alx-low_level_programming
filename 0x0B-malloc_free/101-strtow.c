#include "main.h"
#include <stdlib.h>
/**
 * count_word - Count the number of words
 * @s: The string
 *
 * Return: 0
 */
int count_word(char *s)
{
	int words, count, f;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
		if (s[count] == ' ')
		{
			f = 0;
		}
		else if (f == 0)
		{
			f = 1;
			words++;
		}
	}
	return (words);
}
/**
 * strtow - Split a string into words
 * @str: The string
 *
 * Return: 0.
 */
char **strtow(char *str)
{
	int i, j = 0, w, a = 0, count = 0, start, end;
	char **m, *t;

	for (; *(str + a); )
	{
		a++;
	}
	w = count_word(str);
	if (w == 0)
	{
		return (NULL);
	}
	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= a; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				t = (char *)malloc(sizeof(char) * (count + 1));
				end = i;
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				m[j] = t - count;
				j++;
				count = 0;
			}
		}
		else if (count++ == 0)
		{
			start = i;
		}
	}
	m[j] = NULL;
	return (m);
}
