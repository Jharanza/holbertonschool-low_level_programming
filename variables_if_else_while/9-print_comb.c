#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Prints single digits numbers with commas and space
 * Return: Always (Succes)
 *
 */


int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		if (n == 9)
		{
			break;
		}
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);

}
