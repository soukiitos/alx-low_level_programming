#include "main.h"
/**
 * print_most_numbers - Print the most Numbers
 * Return: 0 'Success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + 48);
		}
	}
	_putchar('\n');
}
