#include<stdio.h>
/**
 * main - Print all the letters except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		if (C != 'e' && C != 'q')
		{
			putchar(C);
		}
	}
	putchar('\n');
	return (0);
}
