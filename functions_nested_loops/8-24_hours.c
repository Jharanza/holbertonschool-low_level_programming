#include "main.h"

/**
 * jack_bauer - prints al minute of the day of Jack Bauer
 *
 * Return: void
 *
 */

void jack_bauer(void)
{
	int n, o, p, q;

	for (n = 0; n <= 2; n++)
	{
		for (o = 0; o <= 9; o++)
		{
			if ((n <= 1 && o <= 9) || (n <= 2 && o <= 3))
			{
				for (p = 0; p <= 5; p++)
				{
					for (q = 0; q <= 9; q++)
					{
						_putchar(n + '0');
						_putchar(o + '0');
						_putchar(58);
						_putchar(p + '0');
						_putchar(q + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
