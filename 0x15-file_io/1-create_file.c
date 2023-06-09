#include "main.h"
/**
 * create_file - Create a file
 * @filename: A file's name
 * @text_content: A NULL terminated string
 *
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, j, fn;

	if (filename == NULL)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fn == -1)
	{
		return (-1);
	}
	while (text_content[i])
	{
		i++;
	}
	j = write(fn, text_content, i);
	if (j == 1)
	{
		return (1);
	}
	close(fn);
	return (1);
}
