#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c: The digit
 * Return: 1 is a digit 0 is otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
