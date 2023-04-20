#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - Print numbers
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: A variable
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int j = 0;

	va_start(i, n);
	while (j < n)
	{
		printf("%d", va_arg(i, int));
		if (separator != NULL || j != (n - 1))
		{
			printf("%s", separator);
		}
		j++;
	}
	printf("\n");
	va_end(i);
}
