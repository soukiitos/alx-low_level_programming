#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Perform simple operations
 * @argc: The number of command line arguments
 * @argv: The array size argc
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int (*operat)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operat = get_op_func(argv[2]);
	if (!operat)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operat(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
