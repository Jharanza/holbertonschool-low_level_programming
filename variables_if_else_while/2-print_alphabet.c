#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Print letters from a to z
 * Return: Always (Succes)
 *
 */


int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		putchar('\n');
		n++;
	}
	return (0);

}
