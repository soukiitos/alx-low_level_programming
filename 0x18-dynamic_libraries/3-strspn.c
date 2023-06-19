#include "main.h"
/**
 *  _strspn - Get the length of a prefix substring
 *  @s: The first character
 *  @accept: The second character
 *
 *  Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, j;

	for (a = 0; s[a] != '\0'; a++)
	{
		j = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				j++;
				break;
			}
		}
		if (accept[b] != s[a])
		{
			j = 1;
			break;
		}
	}
	return (a);
}
