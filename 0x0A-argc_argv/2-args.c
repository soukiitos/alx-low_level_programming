#include <stdio.h>
#include "main.h"
/**
 * main - Print all arg a program recieve
 * @argc: The number of command line arguments
 * @argv: The array of size argc
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int a;

	a = 0;
	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
