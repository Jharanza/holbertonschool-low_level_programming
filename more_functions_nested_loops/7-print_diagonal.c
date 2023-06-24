#include "main.h"

/**
 * print_diagonal - Draw a diagonal line
 * @n: variable tell us the size of the diagonal
 * Return: empty
 *
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
