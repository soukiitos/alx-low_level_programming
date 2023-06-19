#include "main.h"
/**
 *_islower - Checks for lowercase character
 *
 *@c: the character in ASCII code
 *
 * Return: 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
