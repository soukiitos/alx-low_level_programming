#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: The String
 *
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
