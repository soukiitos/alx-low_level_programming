#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
