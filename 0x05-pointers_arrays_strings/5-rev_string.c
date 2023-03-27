#include "main.h"
/**
 * rev_string - Reverse Strings
 * @s: A string
 *
 * Return: 0 (Success)
 */
void rev_string(char *s)
{
	int i = 0, length = 0;
	char c;

	while (s[i++] != '\0')
		length++;
	for (i = length - 1; i >= length / 2; i--)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
	}
}
