#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9 without char variables
 * Return: Always (Succes)
 *
 */


int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + 48);
		x++;
	}
	putchar('\n');
	return (0);

}
