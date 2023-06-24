#include "main.h"

/**
 * print_line - Print n times a line
 *
 * @n: Variable tell us how many times print a line
 *
 * Return: void
 *
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
