#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 *
 * @i : An integer
 *
 * Return: 0 (Success)
 */
int print_last_digit(int i)
{
	int r;

	r = i % 10;
	if (r < 0)
	{
		_putchar(-r);
		return (-r);
	}
	else
	{
		_putchar(r);
		return (r);
	}
}
