#include "main.h"
/**
 * print_numbers - Print the numbers
 * Return: 0 (Success)
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + 48);
	}
	_putchar('\n');
}
