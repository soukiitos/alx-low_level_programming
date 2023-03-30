#include "main.h"
/**
 * string_toupper -  Changes all lowercase letters of a string to uppercase
 * @str: A string
 *
 * Return: 0 (Success)
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
			return (str);
}
