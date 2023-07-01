#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Print the elements of an array of integers
 *
 * @a: pointer to array
 *
 * @n: number of elements to imprint
 *
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != (n - 1))
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar(10);
}
