#include "main.h"
#define read_buffer_size 1024
/**
 * main - The code
 * @ac: An integer
 * @av: A character
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int i, j, k;
	char buffer[read_buffer_size];

	if (ac >= 2)
	{
		dprintf(STDERR_FILENO, USAGE), exit(97);
	}
	i = open(av[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, ERROR_NREAD, av[1]), exit(98);
	}
	j = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, ERROR_NWRITE, av[2]), exit(99);
	}
	k = read(i, buffer, read_buffer_size);
	for (; k > 0; )
	{
		if (write(j, buffer, k) != k)
		{
			dprintf(STDERR_FILENO, ERROR_NWRITE, av[2]), exit(99);
		}
	}
	if (k == -1)
	{
		dprintf(STDERR_FILENO, ERROR_NREAD, av[1]), exit(98);
	}
	i = close(i);
	j = close(j);
	if (i)
	{
		dprintf(STDERR_FILENO, ERROR_NCLOSE, i), exit(100);
	}
	if (j)
	{
		dprintf(STDERR_FILENO, ERROR_NCLOSE, j), exit(100);
	}
	return (EXIT_SUCCESS);
}
