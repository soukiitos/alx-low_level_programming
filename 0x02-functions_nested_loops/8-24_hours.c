#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return : 0 (Success)
 */
void jack_bauer(void)
{
	int h, m, a, b;

	while (h <= 23)
	{
		while (m <= 59)
		{
			a = m % 10;
			b = h % 10;
			_putchar((h / 10) + 48);
			_putchar(b + 48);
			_putchar(58);
			_putchar((m / 10) + 48);
			_putchar(b + 48);
			m++;
			_putchar('\n');
		}
		h++;
		m = 0;
	}
}
