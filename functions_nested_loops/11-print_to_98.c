#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print the numbers from a number to 98
 *
 * @n: Start point to 98
 *
 * Return: vid
 *
 */

void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
