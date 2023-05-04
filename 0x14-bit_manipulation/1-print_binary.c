#include "main.h"
/**
 * print_binary - Print the binary representation of a number
 * @n: A long unsigned integer
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
	}
	else
	{
		if (n >> 1)
		{
			print_binary(n >> 1);
		}
		_putchar('0' + (n & 1));
	}
}
