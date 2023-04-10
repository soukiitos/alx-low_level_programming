#include <stdio.h>
#include "main.h"
/**
 * main - Print the min num of coins to make change for an amount of money
 * @argc: The number of command line arguments
 * @argv: The array of size argc
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int numc = 0, cents;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	for (; cents > 0;)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}
		numc += 1;
	}
	printf("%d\n", numc);
	return (0);
}
