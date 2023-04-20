#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - Print anything
 * @format: A list of types of arguments
 * @...: A variable
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list l;
	unsigned int i = 0;
	char *s, *f = "";

	va_start(l, format);
	if (format != NULL)
	{
		while (format && format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", f, (int) va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", f, (int) va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", f, (double) va_arg(l, double));
					break;
				case 's':
					s = (char *) va_arg(l, char *);
					if (!s)
					{
						s = "(nil)";
					}
					printf("%s%s", f, s);
					break;
				default:
					i++;
					continue;
			}
			f = ", ";
			i++;
		}
	}
		printf("\n");
		va_end(l);
}
