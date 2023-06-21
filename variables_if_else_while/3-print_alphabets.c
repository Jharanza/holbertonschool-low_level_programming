#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Print letters from a to z and A to Z
 * Return: Always (Succes)
 *
 */


int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	char m = 'A';
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);

}
