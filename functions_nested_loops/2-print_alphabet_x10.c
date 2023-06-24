#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet ten times
 * Return 0
 *
 */

void print_alphabet_x10(void)
{
	int cont = 0;

	while (cont < 10)
	{
		int i;

		for (i = 0; i <= 25; i++)
		{
			_putchar(97 + i);
		}
		cont++;
		_putchar(10);
	}

}
