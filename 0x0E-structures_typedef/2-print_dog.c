#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Print a struct dog
 * @d: The structure of dog
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\n0wner: %s\n", d->name, d->age, d->owner);
	if (d == NULL)
	{
		return;
	}
}
