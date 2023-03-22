#include <stdio.h>
/**
 * main - Print each new term in Fibonacci by adding the previous two terms
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int a, b, F1, F2;

	a = 1;
	b = 2;
	F1 = F2 = 0;
	while (F1 <= 4000000)
	{
		F1 = a + b;
		a = b;
		b = F1;
		if ((a % 2) == 0)
		{
			F2 += a;
		}
	}
	printf("%ld\n", F2);
	return (0);
}
