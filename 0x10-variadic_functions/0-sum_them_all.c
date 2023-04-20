#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - Return the sum of all its parameters
 * @n: The number of parameters
 * @...: A number
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list paI;
	unsigned int i = 0, sum = 0;

	va_start(paI, n);
	while (i < n)
	{
		sum += (int) va_arg(paI, int);
		i++;
	}
	va_end(paI);
	return (sum);
}
