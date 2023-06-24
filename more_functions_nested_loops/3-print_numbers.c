#include "main.h"

/**
 * print_numbers - Print from 0 - 9 with _putchar
 *
 * Return: void
 *
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 48);
	}
	_putchar(10);
}
