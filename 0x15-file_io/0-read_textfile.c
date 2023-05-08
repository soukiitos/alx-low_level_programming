#include "main.h"
/**
 * read_textfile - Read a text file and print it to the POSIX standerd output
 * @filename: The file's name
 * @letters: The number of letters
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j;
	int fn;
	char *l;

	l = malloc(sizeof(char) * (letters));
	if (filename == NULL)
	{
		return (0);
	}
	if (l == NULL)
	{
		return (0);
	}
	fn = open(filename, O_RDONLY);
	i = read(fn, l, letters);
	j = write(STDOUT_FILENO, l, i);
	if (!i)
	{
		close(fn);
		return (0);
	}
	free(l);
	close(fn);
	return (j);
}
