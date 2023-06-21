#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Print letters from a to z , except e and q
 * Return: Always (Succes)
 *
 */


int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);

}
