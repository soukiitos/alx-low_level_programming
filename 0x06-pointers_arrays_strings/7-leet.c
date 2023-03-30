#include "main.h"
/**
 * leet -  Encodes a string into 1337
 * @n: String
 *
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char s[] = "aAeEoOtTlL";
	char p[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s[j])
			{
				n[i] = p[j];
			}
		}
	}
	return (n);
}
