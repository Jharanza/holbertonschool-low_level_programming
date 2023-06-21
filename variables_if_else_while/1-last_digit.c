#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main: Print number if greater than 5, smaller than 6 or equal to 0 
 * return: Always (Succes)
 *
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is ");
		n = n % 10;
		printf("%d", n);
		printf(" and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is ");
		n = n % 10;
		printf("%d", n);
		printf(" and is 0\n");
	}
	else
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is ");
		n = n % 10;
		printf("%d", n);
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
