#include "main.h"
/**
 * puts_half - Print half of a string
 * @str: The string
 *
 * Return: 0 (Success)
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j++;
	}
	else
	{
		j = i / 2;
	}
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
