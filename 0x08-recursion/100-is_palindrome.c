#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: The String
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * _palindrome - Check if it is a palindrome
 * @s: The string
 * @a: An integer
 * @b: An integer
 *
 * Return: 0
 */
int _palindrome(char *s, int a, int b)
{
	if (s[a] == s[b])
		if (a > b / 2)
			return (1);
		else
			return (_palindrome(s, a + 1, b - 1));
	else
		return (0);
}
/**
 * is_palindrome - return 1 if a string is a palindrome and 0 if not
 * @s: The String
 *
 * Return: 0
 */
int is_palindrome(char *s)
{
	return (_palindrome(s, 0, _strlen_recursion(s) - 1));
}
