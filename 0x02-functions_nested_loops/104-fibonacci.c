#include <stdio.h>
/**
 * main - Find and Print the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int a, b, F1, F2, c, d;
	int i, j, k;

	a = 1;
	b = 2;
	j = k = 1;
	printf("%ld,%ld", a, b);
	for (i = 0; i < 96; i++)
	{
		if (j)
		{
			F1 = a + b;
			printf(" ,%ld", F1);
			a = b;
			b = a;
		}
		else
		{
			if (k)
			{
				c = a % 1000000000;
				d = b % 1000000000;
				a = a / 1000000000;
				b = b / 1000000000;
			}
			F2 = c + d;
			F1 = a + b + (F2 / 1000000000);
			printf(" ,%ld", F1);
			printf("%ld", F2 % 1000000000);
			a = b;
			c = d;
			b = F1;
			d = F2 % 1000000000;
		}
		if (((a + b) < 0) && j == 1)
			j = 0;
	}
	printf("\n");
	return (0);
}
