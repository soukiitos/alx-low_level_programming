#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - return 1 if the input integer is a prime number
 * @n: An integer
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - Check if the integer is a prime number
 * @n: An integer
 * @i: An integer
 *
 * Return: 0
 */
int _prime(int n, int i)
{
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if (n <= 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (_prime(n, i + 1));
}
