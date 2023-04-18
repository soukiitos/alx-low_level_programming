#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Free dog
 * @d: The structure of dog
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
