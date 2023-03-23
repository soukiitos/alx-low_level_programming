#include "main.h"
/**
 * print_line - Draw a straight line
 * @n: A number
 * Return: 0 (Success)
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
