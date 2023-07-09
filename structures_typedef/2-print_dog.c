#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: Dog struct
 *
 * Return: Void
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
	{
		if (d->name == NULL) d->name = "(nil)";
		if (d->owner == NULL) d->owner = "(nil)";
		
		return ;	
	}
}
