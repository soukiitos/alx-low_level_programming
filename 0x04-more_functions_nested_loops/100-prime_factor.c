#include <stdio.h>
#include <math.h>
/**
 * main - Find and Print the largest prime factor of a number
 * Return: 0 (Success)
 */
int main(void)
{
	long int a, b, n = 612852475143;
	double s = sqrt(n);

	for (a = 1; a <= s; a++)
	{
		if (n % a == 0)
		{
			b = n / a;
		}
	}
	printf("%ld\n", b);
	return (0);
}
