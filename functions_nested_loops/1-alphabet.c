#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char n;

	for (n = 0; n <= 25; n++)
	{
		_putchar(97 + n);
	}
	_putchar(10);
}
