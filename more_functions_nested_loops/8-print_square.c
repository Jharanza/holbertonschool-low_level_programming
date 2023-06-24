#include "main.h"

/**
 * print_square - Print a square of different sizes
 *
 * @size: Define the square size
 *
 * Return: void
 *
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
