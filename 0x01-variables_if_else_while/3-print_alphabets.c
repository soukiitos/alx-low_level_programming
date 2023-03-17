#include <stdio.h>
/**
 * main - alphABET
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char A[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(A[i]);
	}
	putchar('\n');
	return (0);
}
