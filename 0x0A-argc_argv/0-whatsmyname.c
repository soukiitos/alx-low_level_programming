#include <stdio.h>
#include "main.h"
/**
 * main - Print the name of a Program
 * @argc: The number of command line arguments
 * @argv: The array of size argc
 *
 * Return: 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
