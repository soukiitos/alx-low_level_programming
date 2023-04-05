#include "main.h"
/**
 * _Fsqrt - Check if the square of a number exist
 * @n: A number
 * @i: An integer
 *
 * Return: 0.
 */
int _Fsqrt(int i, int n)
{
        if (i * i == n)
                return (i);
	else if (i * i > n)
                return (-1);
        return (_Fsqrt(i + 1, n));
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: A number
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_Fsqrt(1, n));
}
