#include "main.h"
#include <stdio.h>

/**
 * times_table - Print the times table
 *
 * Return: void
 *
 */

void times_table(void)
{
	int x;
	int y;
	int res;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			res = x * y;
			
			if (y == 0)
			{
				printf("%d,", res);
			}
			else if (y == 9)
			{
				if (res < 10)
				{
					printf("  %d", res);
				}
				else
				{
					printf(" %d", res);
				}
			}
			else if (res <= 9)
			{
				printf("  %d,", res);
			}
			else
			{
				printf(" %d,", res);
			}
		}
		printf("\n");
	}
}
