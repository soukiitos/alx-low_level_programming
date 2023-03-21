#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a1, a2;

	for (a1 = 1; a1 <= 10; a1++)
	{
		for (a2 = 97; a2 <= 122; a2++)
		{
			_putchar(a2);
		}
		_putchar('\n');
	}
}
