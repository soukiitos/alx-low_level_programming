#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: The character
 * Return: 1 is uppercase 0 is  otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
