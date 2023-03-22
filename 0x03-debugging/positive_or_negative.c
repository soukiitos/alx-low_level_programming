#include "main.h"
/**
 * positive_or_negative - Positive anything is better than negative nothing
 *@n: An integer
 * Return: 0
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
