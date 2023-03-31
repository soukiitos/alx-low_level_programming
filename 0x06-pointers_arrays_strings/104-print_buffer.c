#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Print a buffer
 * @b: The buffer
 * @size: The size of buffer
 *
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int i = 0, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		j = size - i < 10 ? size - i : 10;
		printf("%08x: ", i);
		for (k = 0; k < 10; k++)
		{
			if (k < j)
				printf("%02x", *(b + i + k));
			else
				printf(" ");
			if (k % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < j; k++)
		{
			int a = *(b + i + k);

			if (a < 32 || a > 132)
			{
				a = '.';
			}
			printf("%a", a);
		}
		printf("\n");
		i += 10;
	}
}
