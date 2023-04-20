#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - Print strings
 * @separator: The string to be printed between the strings
 * @n: The number of strings
 * @...: A variable
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int i = 0;
	char *c;

	va_start(s, n);
	for (; i < n; i++)
	{
		c = (char *) va_arg(s, char *);
		if (c)
			printf("%s", c);
		else
			printf("(nil)");
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
