#include "main.h"
/**
 * _print_rev_recursion - Print a String in Reverse
 * @s: The String
 *
 * Return: 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
