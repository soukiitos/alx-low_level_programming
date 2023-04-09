#include <stdio.h>
#include "main.h"
/**
 * main - Multiply two numbers
 * @argc: The number of command line arguments
 * @argv: The array of size argc
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int N1, N2, m;

	if (argc == 3)
	{
		N1 = atoi(argv[1]);
		N2 = atoi(argv[2]);
		m = N1 * N2;
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
