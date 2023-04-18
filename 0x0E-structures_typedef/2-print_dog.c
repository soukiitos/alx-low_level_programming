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
	if ((d->name) != NULL)
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	if ((d->age) != 0)
		printf("Age: %f\n", (d->age) ? d->age : 0);
	if ((d->owner) != NULL)
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	if (d == NULL)
		return;
}
