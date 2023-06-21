#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Prints hexadecimals values
 * Return: Always (Succes)
 *
 */


int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + 48);
	}

	for (x = 0; x <= 5; x++)
	{
		putchar(x + 97);
	}

	putchar(10);

	return (0);

}
