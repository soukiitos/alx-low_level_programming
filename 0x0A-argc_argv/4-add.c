#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Add positive numbers
 * @argc: The number of command line arguments
 * @argv: The array of size argc
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	char *a;
	unsigned int b, s = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a = argv[i];
			for (b = 0; b < strlen(a); b++)
			{
				if (a[b] < 48 || a[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			s += atoi(a);
			a++;
		}
		printf("%d\n", s);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
