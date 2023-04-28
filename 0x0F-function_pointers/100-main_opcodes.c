#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the opcodes of its own main function
 * @argc: The numbaer of command line arguments
 * @argv: The aray of size argc
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *array;
	int i, j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	for (; j < i; j++)
	{
		if (j == i - 1)
		{
			printf("%2hhx\n", array[j]);
			break;
		}
		printf("%02hhx ", array[j]);
	}
	return (0);
}
