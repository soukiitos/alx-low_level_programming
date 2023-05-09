#include "main.h"
/**
 * append_text_to_file - Append text at the end of a file
 * @filename: A file's name
 * @text_content: The NULL terminated string
 *
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
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
	fn = open(filename, O_WRONLY | O_APPEND);
	if (fn == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[i])
		{
			i++;
		}
	}
	j = write(fn, text_content, i);
	if (j == 1)
	{
		return (1);
	}
	close(fn);
	return (1);
}
