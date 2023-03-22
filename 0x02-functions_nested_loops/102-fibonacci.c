#include <stdio.h>
/**
 * main - Print the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long F1 = 0, F2 = 1, s;

	for (a = 0; a < 50; a++)
	{
		s = F1 + F2;
		printf("%lu", s);
		F1 = F2;
		F2 = s;
		if (a == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}
	return (0);
}
