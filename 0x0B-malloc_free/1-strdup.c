#include <stdlib.h>
#include "main.h"
/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: A string
 *
 * Return: 0.
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *d;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[j];)
	{
		j++;
	}
	d = malloc(sizeof(char) * (j + 1));
	if (d == NULL)
	{
		return (NULL);
	}
	while ((d[i] = str[i]) != '\0')
	{
		i++;
	}
	return (d);
}
