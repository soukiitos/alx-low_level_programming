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
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age ? d->age : 0);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
