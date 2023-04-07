#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: A string
 *
 * Return: 0 (Success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
