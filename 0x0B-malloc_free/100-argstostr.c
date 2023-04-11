#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenate all the args
 * @ac: The arg Count
 * @av: The arg vector
 *
 * Return: 0.
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, a = 0, b = 0;
	char *c;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (ac > i)
	{
		while (av[i][j])
		{
			a++;
			j++;
		}
		j = 0;
		i++;
		}
	c = malloc((sizeof(char) * a) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			c[b] = av[i][j];
			j++;
			b++;
		}
		c[b] = '\n';
		j = 0;
		i++;
		b++;
	}
	b++;
	c[b] = '\0';
	return (c);
}
