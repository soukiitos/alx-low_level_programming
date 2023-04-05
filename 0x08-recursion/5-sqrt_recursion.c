#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: A number
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_Fsqrt(n, 0));
}
/**
 * _Fsqrt - Check if the square of a number exist
 * @n: A number
 * @i: An integer
 *
 * Return: 0.
 */
int _Fsqrt(int i, int n)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	else
	{
		return (_Fsqrt(n, i + 1));
	}
}
