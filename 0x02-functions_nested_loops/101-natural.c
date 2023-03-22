#include <stdio.h>
/**
 * main - List all the natural numbers below 10 that are multiple $s of 3 or 5
 * The multiples are below 1024 (excluded)
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int s, sum = 0;

	for (s = 0; s < 1024; s++)
	{
		if ((s % 3) == 0 || (s % 5) == 0)
		{
			sum += s;
		}
	}
		printf("%d\n", sum);
		return (0);
}
