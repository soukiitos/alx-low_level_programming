#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Print a struct dog
 * @d: The structure of dog
 *
 * Return: 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((d->name) != NULL)
		printf("Name: %s\n", d->name);
	if ((d->age) != 0)
		printf("Age: %f\n", d->age);
	if ((d->owner) != NULL)
		printf("Owner: %s\n", d->owner);
}
