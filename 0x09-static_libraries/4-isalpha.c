#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 *
 * @c : the character in ASCII code
 *
 * Return: 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
