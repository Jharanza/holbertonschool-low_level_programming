#include <stdio.h>

/**
 * main - Print numbers with  different digits
 * Return: Always (Succes)
 *
 */

int main(void)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i != j && i != k && j != k && i < j && j < k)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i == 7 && j == 8 && k == 9)
					{
						break;
					}
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
