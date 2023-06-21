#include <stdio.h>

/**
 * main - Print two pairs of different numbers
 * Return: Always (Succes)
 *
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != i && j > i)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i == 8 && j == 9)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
