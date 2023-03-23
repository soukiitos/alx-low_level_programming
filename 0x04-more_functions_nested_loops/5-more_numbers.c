#include "main.h"
/**
 * more_numbers - Print the numbers 10 times
 * Return: 0 (Success)
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + 48);
			}
			_putchar((b % 10) + 48);
		}
		_putchar('\n');
	}
}
