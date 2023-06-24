#include "main.h"

/**
 * print_triangle - Print a triangle
 *
 * @size: number tell us triangle size
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = size - x ; y > 1; y--)
			{
				_putchar(' ');
			}
			for (z = 0; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
