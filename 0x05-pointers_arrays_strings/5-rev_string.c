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

	while (s[i++])
		length++;
	for (i = length--; i >= length / 2; i--)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
	}
}
