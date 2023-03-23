#include "main.h"
/**
 * print_numbers - Print the numbers
 * Return: 0 (Success)
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + 48);
	}
	_putchar('\n');
}
