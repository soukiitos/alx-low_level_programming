#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encode a string
 * @s: The string
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i, j;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; d[j] != '\0'; j++)
		{
			if (s[i] == d[j])
			{
				s[i] = r[j];
				break;
			}
		}
	}
	return (s);
}
