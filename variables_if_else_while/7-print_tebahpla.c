#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Prints letters from z to a
 * Return: Always (Succes)
 *
 */


int main(void)
{
	int x;

	for (x = 0; x > -26; x--)
	{
		putchar(x + 122);
	}
	putchar(10);

	return (0);

}
