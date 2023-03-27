#include "main.h"
/**
 * puts2 - Print every other character of a string
 * @str: A string
 *
 * Return: 0 (Success)
 */
void puts2(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
